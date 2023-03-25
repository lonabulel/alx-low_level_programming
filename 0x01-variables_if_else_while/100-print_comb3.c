#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i, j;

	i = '0';

	while (i < '9')
	{
		j = i + 1;

		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (i != '8')
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}

		i++;
	}
	return (0);
}

