#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int res, res2;

	res = _printf("Hola %s como estas %c. Tengo %d anios", "alex", 'c', 44);
	res2 = printf("Hola %s como estas %c. Tengo %d anios\n", "alex", 'c', 44);
	printf("Len_: %d, Len: %d\n", res, res2);
	return (res);
}
