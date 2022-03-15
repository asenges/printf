#include "main.h"
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
	sum = 0;

	if (num >= 0)
	{
		while (w >= 10)
		{
			w = w / 10;
			j++;
		}
		res = malloc(j);
		sum = print_positive(res,  num);
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
		sum = print_negative(res,  num);
	}
	free(res);
	return (sum);
}

