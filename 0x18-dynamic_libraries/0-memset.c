#include "main.h"
#include <stdio.h>
/**
 * _memset - replace n characters with b
 * @s: memory address for the string value
 * @b: the value to replace the n characters
 * @n: the number of characters to replace
 *
 * Description:n chars are replaced
 * Return: Always(0) Success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *index = (char *)s;

	for (i = 0; i < n; i++)
		index[i] = b;

	return (index);
}
