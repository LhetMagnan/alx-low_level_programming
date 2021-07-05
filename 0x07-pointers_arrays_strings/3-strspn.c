#include "holberton.h"
/**
 * _strspn - gets len of prefix substring
 * @s: first pointer parameter
 * @accept: second pointer parameter
 *
 * Return: Always(0) Success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				break;
			}
			j++;
		}
		if (!accept[j])
		{
			break;
		}
		i++;
	}
	return (i);
}
