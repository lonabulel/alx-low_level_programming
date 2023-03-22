#include "main.h"
/**
 * _isalpha - checks if input is an uppercase character
 * using if statements to create the function
 * @c: entry parameter which should be an alphabet
 * Return: either 0 or 1
 */
int _isalpha(int c)
{
	int to_return;

	if (c >= 'a' || c <= 'Z')
		to_return = 1;
	else
		to_return = 0;

	return (to_return);
}

