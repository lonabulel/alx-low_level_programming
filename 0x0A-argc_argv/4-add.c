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
	int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!(argv[i][j] > 48 && argv[i][j] < 57))
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
	}
	printf("%d\n", sum);
	return (0);
}
