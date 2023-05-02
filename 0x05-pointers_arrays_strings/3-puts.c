#include "main.h"
/**
 * _puts-prints a string to stdout
 * @str: The string
 * Return: the string's length
 */

void _puts(char *str)
{
	int b = 0;

	while (str[b] != '\0')
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
