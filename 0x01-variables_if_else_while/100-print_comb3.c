#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i,j;

	i = '0';
	
	while (i < '9')
	{
		putchar(i);
		
		j = i++;
		
		while (j <= '9')
		{
			putchar(j);
			if (j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
		
		i++;
	}
	return(0);
}

