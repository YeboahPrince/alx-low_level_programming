
#include "main.h"

/**
 * print_number - Prints the numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int n9;

	n9 = n;

	if (n < 0)
	{
		_putchar('-');
		n9 = -n;
	}

	if (n9 / 10 != 0)
	{
		print_number(n9 / 10);
	}
	_putchar((n9 % 10) + '0');
}
