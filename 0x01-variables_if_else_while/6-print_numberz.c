#include <stdio.h>
/**
 * main - main program
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);
		i++;
	}

	putchar('\n');
	return (0);
}
