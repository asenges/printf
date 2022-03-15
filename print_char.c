#include "main.h"
#include <stdarg.h>
/**
 * print_char - print char
 * @c: parameter
 * Return: int
 */
int print_char(va_list c)
{
	char res;

	res = va_arg(c, int);
	_putchar(res);
	return (1);
}

