#include <am.h>
#include <nemu.h>
#include <string.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t val = inl(VGACTL_ADDR);
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = val>>16, .height = val&0xffff,
    .vmemsz = (val>>16) * (val&0xffff) * sizeof(uint32_t)
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int w = io_read(AM_GPU_CONFIG).width;

  int x = ctl->x;
  int y = ctl->y;
  uint32_t *pixels = (uint32_t *)ctl->pixels;

  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;

  for( int i = 0; i<ctl->h; i++){
    memcpy(&fb[(y+i)*w + x],&pixels[i*w], w*sizeof(uint32_t));
  }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
