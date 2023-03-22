#include "main.h"
/**
 * print_last_digit - Prints the last digit of an inputted number
 *
 * @num: Inputted number
 * Return: The last digit of num
 */
int print_last_digit(int num)
{
	int num1;

	num1 = _abs(num % 10);

	return (num1);
}
