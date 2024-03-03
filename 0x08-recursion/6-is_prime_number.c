#include "main.h"
/**
 * check - check to see if the num is prime
 * @a: int
 * @z: int
 * Return: int
 */
int check(int a, int z)
{
	if (z < 2 || z % a == 0)
		return (0);
	else if (a > z / 2)
		return (1);
	else
		return (check(a + 1, z));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
