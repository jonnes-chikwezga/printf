#ifndef CUSTOM_PRINTF_H
#define CUSTOM_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int handle_formats(const char *format, va_list args);
int custom_printf(const char *format, ...);
int print_string(const char *str);
int print_char(int c);

#endif
