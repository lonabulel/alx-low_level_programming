#include "main.h"
/**
 * print_square - Prints a square made oif hash
 *
 * @size: The size of the square
 * Return: Nothing
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
			_putchar(35);
	_putchar('\n');
	}
	else
		putchar('\n')
	}
}
