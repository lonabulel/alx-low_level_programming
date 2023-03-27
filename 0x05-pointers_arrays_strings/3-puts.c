#include "main.h"
/**
 * _puts - Prints an inputted string
 *
 * @str: inputted string
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar (str[i]);
		i++;
	}
	_putchar('\n');
}
