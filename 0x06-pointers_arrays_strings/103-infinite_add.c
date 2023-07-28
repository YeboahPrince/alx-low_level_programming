#include "main.h"

/**
 * rev_string - Reverses an array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int m = 0;
	int k = 0;
	char temp;

	while (*(n + m) != '\0')
	{
		m++;
	}
	m--;

	for (k = 0; k < m; k++, m--)
	{
		temp = *(n + k);
		*(n + k) = *(n + m);
		*(n + m) = temp;
	}
}

/**
 * infinite_add - Adds 2 numbers together.
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, m = 0, k = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + m) != '\0')
		m++;
	while (*(n2 + k) != '\0')
		k++;
	m--;
	k--;
	if (k >= size_r || m >= size_r)
		return (0);
	while (k >= 0 || m >= 0 || overflow == 1)
	{
		if (m < 0)
			val1 = 0;
		else
			val1 = *(n1 + m) - '0';
		if (k < 0)
			val2 = 0;
		else
			val2 = *(n2 + m) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		k--;
		m--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
