#include "main.h"
/**
 * print_positive - print positive integer
 * @num: parameter
 * @res: char pointer
 * Return: int
 */
int print_positive(char *res, int num)
{
	int j, sum;

	j = 0;
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
	return (sum);
}

