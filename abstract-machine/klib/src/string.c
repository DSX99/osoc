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

size_t strnlen(const char *s, size_t n) {
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

  len = strnlen(src, n);
  memset(memcpy(dst, src, len) + len, 0, n - len);
  return dst;
}

char *strcat(char *dst, const char *src) {
  return strcpy(dst + strlen(dst), src);
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
  for(size_t i=0;i<n;i++){
    p[i]=q[i];
  }
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  unsigned char *p = (unsigned char *)s1;
  unsigned char *q = (unsigned char *)s2;
  size_t i=0;
  if(i==n){
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
