#include "holberton.h"
#include <stdio.h>
/**
 * is_prime_number - prime number or not
 * @resp: int
 * @n: number
 * Return: 0 or 1
 */

int check_prime(int n, int resp);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n if they can divide it
 * @n: prime number
 * @resp: int
 * Return: 1 or 0
 */

int check_prime(int n, int resp)
{

	if (resp >= n && n > 1)
		return (1);
	else if (n % resp == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, resp + 1));
}
