#include "main.h"
/**
 * _isupper - returns 1 for upper, 0 for otherwise
 * @c: inputted value
 * using if statement and function creation
 * Return: 1 or 0
 */
int _isupper(int c)
{
	int a;

	if (c >= 'A' && c <= 'Z')
		a = 1;
	else
		a = 0;

	return (a);
}
