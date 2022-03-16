#include "main.h"
/**
 * print_negative - print negative integer
 * @num: parameter
 * @res: char pointer
 * Return: int
 */
int print_negative(char *res, int num)
{
	int j, sum;

	j = 0;
	for (j = 0; num < 0; j++)
	{
		res[j] = num % 10;
		num = num / 10;
	}
	for (j = (strlen(res) - 1); j >= 0; j--)
	{
		_putchar((res[j] * -1) + '0');
		sum++;
	}
	return (sum);
}

