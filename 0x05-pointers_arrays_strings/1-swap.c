#include "main.h"
/**
 * swap_int- to sswap the value of two integers namely int a and int b
 * @a: first int
 * @b: second int
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
