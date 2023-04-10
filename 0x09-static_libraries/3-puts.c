#include "main.h"
/**
 * _puts - Prints an inputted string
 *
 * @s: inputted string
 * Return: Nothing
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar (s[i]);
		i++;
	}
	_putchar('\n');
}
