#include "main.h"
/**
 * check - chechks for sqrt
 * @x: int
 * @y: int
 * return: int
 */
int  check(int x, int y)
{
	if (x * x > y)
		return (-1);
	if (x * x == y)
		return (y);
	return (check(y, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (check(n, 0));
}
