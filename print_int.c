#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_int - prints a integer
 * @i: the integer
 *
 * Return: the amount of digits of the number
 */

int print_int(va_list i)
{
	int b, c = 1, ret = 1, n;

	n = va_arg(i, int);
	b = n;

	if (n < 0)
	{
		ret = 2;
		_putchar(45);
		while (b <= -10)
		{
			b /= 10;
			c *= 10;
			ret++;
		}
		for (; c >= 1; c /= 10)
		{
			_putchar((((n / c) % 10) * -1) + 48);
		}
	}
	else
	{
		while (b >= 10)
		{
			b /= 10;
			c *= 10;
			ret++;
		}
		for (; c >= 1; c /= 10)
		{
			_putchar(((n / c) % 10) + 48);
		}
	}
	return (ret);
}
