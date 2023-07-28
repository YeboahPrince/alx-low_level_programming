#include "main.h"
/**
 * string_toupper - Change all lowercase into uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int l;

	l = 0;
	while (n[l] != '\0')
	{
		if (n[l] >= 'a' && n[l] <= 'z')
			n[l] = n[l] - 32;
		l++;
	}
	return (n);
}
