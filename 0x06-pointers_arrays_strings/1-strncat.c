#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m, v;

	for (m = 0; dest[m] != '\0'; m++)
	{
		continue;
	}
	for (v = 0; src[v] != '\0' && v < n; v++)
	{
		dest[m + v] = src[v];
	}
	dest[m + v] = '\0';
	return (dest);
}
