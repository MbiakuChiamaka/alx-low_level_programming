#include "main.h"
/**
 * reverse_array - reverse array
 * @a:array
 * @n:integer
 * Return:void
 */
void reverse_array(int *a, int n)
{
int m, b;

for (m = 0; (m < (n - 1) / 2); m++)
	{
	b = a[m];
	a[m] = a[n - 1 - m];
	a[n - 1 - m] = b;
	}
}
