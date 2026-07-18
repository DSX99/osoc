#include <am.h>
#include <amdev.h>
#include <klib-macros.h>
#include "klib.h"
#include "riscv.h"

const int ps2_to_am_lut[256] = {
    // Row 1 (F-Keys & Escape)
    [0x76] = AM_KEY_ESCAPE,
    [0x05] = AM_KEY_F1,    [0x06] = AM_KEY_F2,    [0x04] = AM_KEY_F3,    [0x0C] = AM_KEY_F4,
    [0x03] = AM_KEY_F5,    [0x0B] = AM_KEY_F6,    [0x83] = AM_KEY_F7,    [0x0A] = AM_KEY_F8,
    [0x01] = AM_KEY_F9,    [0x09] = AM_KEY_F10,   [0x78] = AM_KEY_F11,   [0x07] = AM_KEY_F12,

    // Row 2 (Numbers & Backspace)
    [0x0E] = AM_KEY_GRAVE,
    [0x16] = AM_KEY_1,     [0x1E] = AM_KEY_2,     [0x26] = AM_KEY_3,     [0x25] = AM_KEY_4,
    [0x2E] = AM_KEY_5,     [0x36] = AM_KEY_6,     [0x3D] = AM_KEY_7,     [0x3E] = AM_KEY_8,
    [0x46] = AM_KEY_9,     [0x45] = AM_KEY_0,
    [0x4E] = AM_KEY_MINUS, [0x55] = AM_KEY_EQUALS,[0x66] = AM_KEY_BACKSPACE,

    // Row 3 (Tab & QWERTY)
    [0x0D] = AM_KEY_TAB,
    [0x15] = AM_KEY_Q,     [0x1D] = AM_KEY_W,     [0x24] = AM_KEY_E,     [0x2D] = AM_KEY_R,
    [0x2C] = AM_KEY_T,     [0x35] = AM_KEY_Y,     [0x3C] = AM_KEY_U,     [0x43] = AM_KEY_I,
    [0x44] = AM_KEY_O,     [0x4D] = AM_KEY_P,
    [0x54] = AM_KEY_LEFTBRACKET, [0x5B] = AM_KEY_RIGHTBRACKET, [0x5D] = AM_KEY_BACKSLASH,

    // Row 4 (Caps & ASDF)
    [0x58] = AM_KEY_CAPSLOCK,
    [0x1C] = AM_KEY_A,     [0x1B] = AM_KEY_S,     [0x23] = AM_KEY_D,     [0x2B] = AM_KEY_F,
    [0x34] = AM_KEY_G,     [0x33] = AM_KEY_H,     [0x3B] = AM_KEY_J,     [0x42] = AM_KEY_K,
    [0x4B] = AM_KEY_L,
    [0x4C] = AM_KEY_SEMICOLON, [0x52] = AM_KEY_APOSTROPHE, [0x5A] = AM_KEY_RETURN,

    // Row 5 (Shift & ZXCV)
    [0x12] = AM_KEY_LSHIFT,
    [0x1A] = AM_KEY_Z,     [0x22] = AM_KEY_X,     [0x21] = AM_KEY_C,     [0x2A] = AM_KEY_V,
    [0x32] = AM_KEY_B,     [0x31] = AM_KEY_N,     [0x3A] = AM_KEY_M,
    [0x41] = AM_KEY_COMMA, [0x49] = AM_KEY_PERIOD,[0x4A] = AM_KEY_SLASH, [0x59] = AM_KEY_RSHIFT,

    // Row 6 (Bottom Modifiers)
    [0x14] = AM_KEY_LCTRL, [0x11] = AM_KEY_LALT,  [0x29] = AM_KEY_SPACE,
};

const int ps2_ext_to_am_lut[256] = {
    // Navigation & Editing
    [0x75] = AM_KEY_UP,
    [0x72] = AM_KEY_DOWN,
    [0x6B] = AM_KEY_LEFT,
    [0x74] = AM_KEY_RIGHT,
    [0x70] = AM_KEY_INSERT,
    [0x71] = AM_KEY_DELETE,
    [0x6C] = AM_KEY_HOME,
    [0x69] = AM_KEY_END,
    [0x7D] = AM_KEY_PAGEUP,
    [0x7A] = AM_KEY_PAGEDOWN,

    // Extended Modifiers
    [0x11] = AM_KEY_RALT,
    [0x14] = AM_KEY_RCTRL,
    [0x2F] = AM_KEY_APPLICATION
};

void __am_timer_init();

void __am_timer_rtc(AM_TIMER_RTC_T *);
void __am_timer_uptime(AM_TIMER_UPTIME_T *);
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t data = inl(0x10011000); 
  switch (data)
  {
  case 0xF0:
    kbd->keydown = 0;
    kbd->keycode = ps2_to_am_lut[inl(0x10011000)];
    break;
  case 0xE0:
    data = inl(0x10011000); 
    if(data == 0xF0){
      kbd->keydown = 0;
      kbd->keycode = ps2_ext_to_am_lut[inl(0x10011000)];
    }else{
      kbd->keydown = 1;
      kbd->keycode = ps2_ext_to_am_lut[inl(0x10011000)];
    }
    break;  
  default:
    kbd->keydown = 1;
    kbd->keycode = ps2_to_am_lut[data];
    break;
  }
}
void __am_uart_rx(AM_UART_RX_T *uart){
  if(*(uint8_t *)(0x10000005L) & 1){ //check fifo buffer (0-empty)
    uart->data = *(uint8_t *)(0x10000000L);
  }else{
    uart->data = -1;
  }
}

static void __am_timer_config(AM_TIMER_CONFIG_T *cfg) { cfg->present = true; cfg->has_rtc = true; }
static void __am_input_config(AM_INPUT_CONFIG_T *cfg) { cfg->present = true;  }
static void __am_uart_config(AM_UART_CONFIG_T *cfg) { cfg->present = true;  }
void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = 640, .height = 480,
    .vmemsz = (640) * (480) * sizeof(uint32_t)
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int w = io_read(AM_GPU_CONFIG).width;

  int x = ctl->x;
  int y = ctl->y;
  uint32_t *pixels = (uint32_t *)ctl->pixels;

  uint32_t *fb = (uint32_t *)(uintptr_t)(0x21000000);

  for( int i = 0; i<ctl->h; i++){
    memcpy(&fb[(y+i)*w + x],&pixels[i*ctl->w], ctl->w*sizeof(uint32_t));
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}


typedef void (*handler_t)(void *buf);
static void *lut[128] = {
  [AM_TIMER_CONFIG] = __am_timer_config,
  [AM_TIMER_RTC   ] = __am_timer_rtc,
  [AM_TIMER_UPTIME] = __am_timer_uptime,
  [AM_INPUT_CONFIG] = __am_input_config,
  [AM_INPUT_KEYBRD] = __am_input_keybrd,
  [AM_GPU_CONFIG  ] = __am_gpu_config,
  [AM_GPU_FBDRAW  ] = __am_gpu_fbdraw,
  [AM_GPU_STATUS  ] = __am_gpu_status,
  [AM_UART_CONFIG ] = __am_uart_config,
  [AM_UART_RX     ] = __am_uart_rx,
};

static void fail(void *buf) { panic("access nonexist register"); }

bool ioe_init() {
  for (int i = 0; i < LENGTH(lut); i++)
    if (!lut[i]) lut[i] = fail;
  __am_timer_init();
  return true;
}

void ioe_read (int reg, void *buf) { ((handler_t)lut[reg])(buf); }
void ioe_write(int reg, void *buf) { ((handler_t)lut[reg])(buf); }
