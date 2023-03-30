/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */

void print_number(int n) {
	int divisor = 1;
	if (n < 0)
		_putchar('_')
			n = -n
}
while (n / divisor >= 10) {
	divisor *= 10;
}
while (divisor != 0) {
	int digit - n /divisor;
	_putchar(digit + '0');
	n %= divisor;
	divisor /= 10;
}
