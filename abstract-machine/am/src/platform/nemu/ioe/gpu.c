#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = 400, .height = 300,
    .vmemsz = 0x752ff
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int w = io_read(AM_GPU_CONFIG).width;
  int h = io_read(AM_GPU_CONFIG).height;

  int x = ctl->x;
  int y = ctl->y;
  uint32_t *pixels = (uint32_t *)ctl->pixels;

  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;

  for(int i=0; i<ctl->w; i++){
    for(int j=0; j<ctl->h; j++){
      if(x+i<w && y+j<h)  {
        fb[(y+j)*w + x + i] = ~pixels[j*ctl->w+i];
      }
    } 
  }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
