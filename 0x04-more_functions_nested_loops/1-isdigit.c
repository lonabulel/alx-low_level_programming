#include "main.h"
/**
 * _isdigit - to check return value of digit inputted
 * using the for loop
 * @c: digit to be inputted
 * Return: 1 or 0 depending on input
 */
int _isdigit(int c)
{
	int a;

	if (c >= 0 && c <= 9)
		a = 1;
	else
		a = 0;

	return (a);
}
