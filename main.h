#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>


/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} match;

int _printf(const char *format, ...);
int _putchar(char c);
int printf_HEX(va_list val);
int printf_HEX_aux(unsigned int num);
int printf_bin(va_list val);
int printf_exclusive_string(va_list val);
int printf_hex(va_list val);
int printf_char(va_list var);
int _strlen(char *s);
int _strlenc(const char *s);
int printf_string(va_list var);
int printf_37(void);
int printf_dec(va_list args);
int printf_int(va_list args);


#endif /* MAIN_H */
