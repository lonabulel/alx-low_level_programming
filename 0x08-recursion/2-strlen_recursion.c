#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: The string passed as argument
 *
 * Return: length of the s
 */
int _strlen_recursion(char *s)
{
	int length;

	if (*s == '\0')
		return (0);
	length = 1 + _strlen_recursion(s + 1);
	return (length);

}
