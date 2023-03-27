#include "main.h"
/**
 * swap_int - swaps the value of the two pointers inputted
 * @a: integer 1
 * @b: integer 2
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;
}
