#include "main.h"
/*_pow_recursion - returns the value of x raised to the power of y
 * @x: int
 * @y: int
 * return: int
 */
int _pow_recursion(int x, int y)
{
	int h;
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(y - 1));
	}
	else 
	{
		return (1);
	}
}

