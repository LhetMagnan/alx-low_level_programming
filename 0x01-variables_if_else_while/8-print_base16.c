#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Main program
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character;

	for (character = '0' ; character <= '9' ; character++)
	{
		putchar(character);
	}
	for (character = 'a' ; character <= 'f' ; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
