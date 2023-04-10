#include "main.h"
/**
 * _abs - returns the absolute value of an integer
 *@n: number to be inputted to get absolute value
 * Return: the absolute value of an inputted number
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
