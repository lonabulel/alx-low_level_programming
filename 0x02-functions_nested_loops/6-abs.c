#include "main.h"
/**
 * _abs - returns the absolute value of an integer
 *@num: number to be inputted to get absolute value
 * Return: the absolute value of an inputted number
 */
int _abs(int num)
{
	if (num < 0)
	{
		num = num * -1;
	}
	return (num);
}
