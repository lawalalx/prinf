#include "main.h"
#include <stdio.h>

/**
 * printf_char - the function that prints char
 * @var: the arg thru
 *
 * Return: 1
 */

int printf_char(va_list var)
{
	char str;

	str = va_arg(var, int);
	_putchar(str);

	return (1);
}
