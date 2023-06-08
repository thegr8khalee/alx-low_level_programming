#include "main.h"
/**
 * check - chechks for sqrt
 * @x: int
 * @y: int
 * return: int
 */
int  check(int x, int y)
{
	if (x * x == y)
		return (y);
	if (x * x > y)
		return (-1);
	return (check(x + 1, y));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
