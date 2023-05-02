#include "main.h"
/**
 * _strcpy-to copy the string that is pointed to by src to dest
 * @dest: char to be checked
 * @src: char to be checked
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int m;

	for (k = 0; src[k] != '\0'; k++)
		dest[k] = src[k];
	dest[k] = '\0';
	return (dest);
}
