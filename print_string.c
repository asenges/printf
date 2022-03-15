#include "main.h"
#include <stdarg.h>
/**
 * print_string - print string
 * @s: parameter
 * Return: int
 */
int print_string(va_list s)
{
	int i;
	char *res = va_arg(s, char *);

	for (i = 0; res[i]; i++)
	{
		_putchar(res[i]);
	}
	return (i + 1);
}

