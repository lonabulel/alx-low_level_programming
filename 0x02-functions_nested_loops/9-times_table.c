#include "main.h"
/**
 *times_table - function prints the 9 times table
 *i will be using a for loop and if statement to do this
 *Return: Nothing
 */
void times_table(void)
{
	int i, j, mult;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mult = i * j;
			if (!((mult / 10) > 0) && (mult != 0))
                                        _putchar(' ');
			if ((mult / 10) > 0)
				_putchar((mult / 10) + '0');
			_putchar((mult %  10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
