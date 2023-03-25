#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	i = '0';

	while (i <= '7')
	{
		j = i + 1;

		while (j <= '8')
		{
			k = j + 1;

			while (k <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i != '7')
				{
					putchar(',');
					putchar(' ');
				}

				k++;
			}

			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
