#include "holberton.h"
/**
 * _isdigit - Checks for a digit
 * @c: Integer to checked
 * Return: returns 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
