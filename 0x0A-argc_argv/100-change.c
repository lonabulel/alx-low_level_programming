#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coin to make change for an amount
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int remainder;
	int coins;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = cents / 25;
	remainder = cents % 25;

	coins = coins + remainder / 10;
	remainder = remainder % 10;

	coins = coins + remainder / 5;
	remainder = remainder % 5;

	coins = coins + remainder / 2;
	remainder = remainder % 2;

	coins = coins + remainder / 1;

	printf("%d\n", coins);

	return (0);
}

