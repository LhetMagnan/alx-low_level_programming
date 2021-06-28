#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Main program
 * description: prints all possible combinations of two two-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int i, j, k, l;
	int digit1 = 48;
	int digit2 = 48;
	int digit3 = 48;
	int digit4 = 48;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if ((i + j) < (k + l))
					{
						putchar(digit1 + i);
						putchar(digit2 + j);
						putchar(' ');
						putchar(digit3 + k);
						putchar(digit4 + l);
						if ((i + j + k + l) != 35)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
