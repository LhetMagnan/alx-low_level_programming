#include "holberton.h"

/**
 * _strstr -  finds a substring
 * @haystack: first parameter
 * @needle: second parameter
 *
 * Description:  locates a substring
 * Return: Always(0) Success
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *fst_string = haystack;
		char *secnd_string = needle

			while (*haystack && *secnd_string && *haystack ==
			       *secnd_string)
			{
				haystack++;
				secnd_string++;
			}
			if (!*secnd_string)
			{
				return (fst_string);
			}
			haystack = fst_string + 1;
	}
	return (NULL);
}
