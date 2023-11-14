#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>


int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list var);
int _strlen(const char *str);
int printf_string(va_list var);
int print_37(void);
int print_dec(va_list args);
int print_int(va_list args);


#endif /* MAIN_H */
