#include "main.h"

/**
 * more-numbers- Print numbers from 0-14 10 times
 * Return:always 0
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			_putchar('i');
	_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}