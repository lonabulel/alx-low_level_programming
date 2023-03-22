#include "main.h"
/**
 * print_sign - prints the sign of a number
 * if statements to be used
 * @n: this is the integer to be inputted
 * Return: 1 if positive, 0 if n is zero or -1 if negative
 */
int print_sign(int n)
{
	int rNo;

	if (n > 0)
	{
		rNo = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		rNo = 0;
		_putchar('0');
	}
	else
	{
		rNo = -1;
		_putchar('-');
	}

	return (rNo);
}
