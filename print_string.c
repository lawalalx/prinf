#include "main.h"

/**
 * print_string  - prints string
 * @var: argumanet
 * Return: the lenght of the string
 */

int print_string(va_list var)
{
	char *str;
	int i;
	int length;

	str = va_arg(var, char *);

	if (str == NULL)
	{
		str = "(NULL)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}
