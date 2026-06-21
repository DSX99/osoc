#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  va_list list;
  va_start(list, fmt);
  int i=0;
  while(fmt[i]!='\0'){
    if(fmt[i]=='%'){
      i++;
      if(fmt[i]=='d'){
        int val = va_arg(list, int);
        char str[12];
        char *p = str;
        itoa(str, val);
        while(*p!='\0'){
          putch(*p);
          p++;
        }
      }else if (fmt[i]=='s'){
        char *p = va_arg(list, char *);
        while(*p!='\0'){
          putch(*p);
          p++;
        }
      }
      i++;
    }else{
      putch(fmt[i]);
      i++;
    }
  }
  return (i);
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  va_list list;
  va_start(list, fmt);
  char *start=out;
  int i=0;
  while(fmt[i]!='\0'){
    if(fmt[i]=='%'){
      i++;
      if(fmt[i]=='d'){
        int val = va_arg(list, int);
        char str[12];
        char *p = str;
        itoa(str, val);
        while(*p!='\0'){
          *out++=*p++;
        }
      }else if (fmt[i]=='s'){
        char *p = va_arg(list, char *);
        while(*p!='\0'){
          *out++=*p++;
        }
      }
      i++;
    }else{
      *out++=fmt[i++];
    }
  }
  *out='\0';
  va_end(list);
  return (out-start);
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
