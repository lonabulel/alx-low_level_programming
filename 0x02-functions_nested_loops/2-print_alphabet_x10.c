#include "main.h"
/**
 *print_alphabet_x10 - prints the alphabet in lower case multiple times
 *prints the alphabet X10
 *Return: nothing
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		char alp;

		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
	_putchar('\n');
	}
}

