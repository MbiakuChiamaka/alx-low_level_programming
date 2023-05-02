#include "main.h"
/**
 * print_rev-> to print a script in reverse
 * @s: string to be printed in rev
 */

void print_rev(char *s)
{
	int m, b;

	b = 0;
	while (s[b] != '\0')
		b++;

	for (m = b - 1; m >= 0; m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
