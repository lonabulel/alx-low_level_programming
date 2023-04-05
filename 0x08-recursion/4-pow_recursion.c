#include "main.h"
/**
 * _pow_recursion - returns value of x raised to the power of y
 * @x: x to be raised to by y
 * @y: is raising x
 * Return: Value
 */
int _pow_recursion(int x, int y)
{
	int raised_value;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	raised_value = x * _pow_recursion(x, y - 1);
	return (raised_value);
}
