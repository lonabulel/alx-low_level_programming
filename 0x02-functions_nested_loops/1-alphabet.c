#include "main.h"
/**
 * print_alphabet - prints alphabets in lower case
 * this function protocol prints all alphabets
 * Return: void
 */


void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
