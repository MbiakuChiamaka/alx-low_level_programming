#include "main.h"
/**
 * rev_string-reverses string
 * @s:char to check
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int m = 0, b, c;
	char v;

	while (s[m] != '\0')
	{
		m++;
	}
	c = m - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		v = s[b];
		s[b] = s[c];
		s[c] = v;
	}
}
