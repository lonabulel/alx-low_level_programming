#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds all the positive numbers
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (argv[i][0] > 65 && argv[i][0] < 122)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[i]);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
