#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main program
 * Description: prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}

	putchar('\n');
	return (0);
}
