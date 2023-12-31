#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encoder a rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int m;
	int n;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; s[n] != '\0'; m++)
	{
		for (n = 0; n < 52; n++)
		{
			if (s[n] == data1[m])
			{
				s[n] = datarot[m];
				break;
			}
		}
	}
	return (s);
}
