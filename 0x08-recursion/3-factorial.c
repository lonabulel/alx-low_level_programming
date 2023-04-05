#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: Given number
 *
 * Return: The factorial of n
 */
int factorial(int n)
{
	int factorial_value;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	factorial_value = n * factorial(n - 1);

	return (factorial_value);
}
