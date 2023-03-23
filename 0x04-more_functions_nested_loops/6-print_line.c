#include "main.h"
/**
 * print_line - Prints a straight line
 *
 * @n: input that determines length of the line
 * Return: Nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(95);

	_putchar('\n');
}
