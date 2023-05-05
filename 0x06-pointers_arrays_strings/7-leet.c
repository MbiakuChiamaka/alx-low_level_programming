#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */
char *leet(char *s)
{
	int g, t;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (g = 0; *(s + g); g++)
	{
		for (t = 0; t <= 9; t++)
		{
			if (a[t] == s[g])
				s[g] = b[t];
		}
	}
	return (s);
}
