#include "main.h"
#include <stdarg.h>
/**
 * print_integer - print integer
 * @i: parameter
 * Return: int
 */
int print_integer(va_list i)
{
	int num, j, w, sum;
	char *res;

	num = va_arg(i, int);
	w = 1;
	j = 0;
	w = num;

	if (num >= 0)
	{
		while (w >= 10)
		{
			w = w / 10;
			j++;
		}

		res = malloc(j);

		for (j = 0; num > 0; j++)
		{
			res[j] = num % 10;
			num = num / 10;
		}

			sum = 0;
		for (j = (strlen(res) - 1); j >= 0; j--)
		{
			_putchar(res[j] + '0');
			sum++;
		}

	}
	else
	{
		_putchar(45);
		while (w <= -10)
		{
			w = w / 10;
			j++;
		}

		res = malloc(j);

		for (j = 0; num < 0; j++)
		{
			res[j] = num % 10;
			num = num / 10;
		}

			sum = 0;
		for (j = (strlen(res) - 1); j >= 0; j--)
		{
			_putchar((res[j] * -1) + '0');
			sum++;
		}
	}

	free(res);

	return (sum);
}

