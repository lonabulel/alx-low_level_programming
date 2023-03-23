#include "main.h"
/**
 * print_numbers - prints the number 0 through to 9
 * using a for loop
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
