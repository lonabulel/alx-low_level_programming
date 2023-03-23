#include "main.h"
/**
 * print_diagonal - Prints a diagonal
 * @n: inputted integer to determine length of diagonal
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int a, i;

	for (a = 0; a < n; a++)
	{
		for (i = 1; i <= a; i++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
}
