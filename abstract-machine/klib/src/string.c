#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  int p=0;
  while(s[p]!='\0'){
    p++;
  }
  return p;
}

size_t _strnlen(const char *s, size_t n) {
  int p=0;
  while(s[p]!='\0' && p<n){
    p++;
  }
  return p;
}

char *strcpy(char *dst, const char *src) {
  char *p;
  size_t len = strlen(src);
  p=memcpy(dst, src, len);
  p[len]='\0';
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  size_t  len;

  len = _strnlen(src, n);
  memset(memcpy(dst, src, len) + len, 0, n - len);
  return dst;
}

char *strcat(char *dst, const char *src) {
  strcpy(dst + strlen(dst), src);
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  size_t len;
  if(strlen(s1)>strlen(s2)){
    len = strlen(s1);
  }else{
    len = strlen(s2);
  }
  return memcmp(s1, s2, len);
}

int strncmp(const char *s1, const char *s2, size_t n) {
  return memcmp(s1, s2, n);
}

void *memset(void *s, int c, size_t n) {
  unsigned char *p = (unsigned char *)s;
  for(int i=0;i<n;i++){
    p[i]=c;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  unsigned char *p = (unsigned char *)dst;
  unsigned char *q = (unsigned char *)src;
  if(q>p){
    for(size_t i=0;i<n;i++){
      p[i]=q[i];
    }
  }else{
    for(size_t i=n-1;i>0;i--){
      p[i]=q[i];
    }
  }
  return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
  unsigned char *p = (unsigned char *)out;
  unsigned char *q = (unsigned char *)in;
  if(n<8 || ((uint32_t)p & 3)!=((uint32_t)q & 3)){
    while(n--){
      *p++ = *q++;
    }
    return out;
  }

  while(((uint32_t)p & 3) != 0 && n>0){
    *p++ = *q++;
    n--;
  }

  uint32_t *p32 = (uint32_t *)p;
  uint32_t *q32 = (uint32_t *)q;

  while(n>=16){
    uint32_t w0 = *q32;
    uint32_t w1 = *(q32+1);
    uint32_t w2 = *(q32+2);
    uint32_t w3 = *(q32+3);

    *p32 = w0;
    *(p32+1) = w1;
    *(p32+2) = w2;
    *(p32+3) = w3;

    q32 += 4;
    p32 += 4;
    n -= 16;
  }

  while(n>=4){
    *p32++ = *q32++;
    n -= 4;
  }

  p = (unsigned char *)p32;
  q = (unsigned char *)q32;

  while(n--){
    *p++ = *q++;
  }
  
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  unsigned char *p = (unsigned char *)s1;
  unsigned char *q = (unsigned char *)s2;
  size_t i=0;
  if(n==0){
      return 0;
  }
  while(p[i]==q[i]){
    i++;
    if(i==n){
      return 0;
    }
  }
  return p[i]-q[i];
}

#endif
