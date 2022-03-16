#include <stdarg.h>
#include "main.h"
/**
 * print_char - print char
 * @c: valist
 * Return: 1
 */
int print_char(va_list c)
{
	char aux;

	aux = va_arg(c, int);
	_putchar(aux);
	return (1);
}
