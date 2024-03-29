#include "main.h"
/**
 * _memcpy - copies specified char*
 * @dest: first pointer parameter
 * @src: second pointer parameter
 * @n: third parameter
 *
 * Description: copies memory area
 * Return: Always(0) Success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
