#include "main.h"
/**
 * reverse_array - Reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int u;
	int y;

	for (u = 0; u < n--; u++)
	{
		y = a[u];
		a[u] = a[n];
		a[n] = y;
	}
}
