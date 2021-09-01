#include "holberton.h"

/**
 * last_index - The last index of a string
 * @s: point to the string
 * Return: last index
 */
int is_palindrome(char *s);
int check(char *s, int start, int end, int pair);
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to be checked
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - checker the palindrome
 * @s: string
 * @start: start number
 * @end: end number
 * @pair: pair number
 * Return: 0 or 1
 */


int check(char *s, int start, int end, int pair)
{

	if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, pair));
}
