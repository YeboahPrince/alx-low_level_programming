#include "main.h"
/**
 * leet - Encodes into a 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int w, q;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (w = 0; n[w] != '\0'; w++)
	{
		for (q = 0; q < 10; q++)
		{
			if (n[w] == s1[q])
			{
				n[w] = s2[q];
			}
		}
	}
	return (n);
}
