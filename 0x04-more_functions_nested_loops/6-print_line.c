#include "holberton.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal.
 * @n : The number of '_' characters to be printed
 * Return: Void.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
