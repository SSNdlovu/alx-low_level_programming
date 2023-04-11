#include "main.h"

/**
 * print_binary - prints the binary equivalent
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int in, counted = 0;
	unsigned long int curren;

	for (in = 63; in >= 0; in--)
	{
		curren = n >> in;

		if (curren & 1)
		{
			_putchar('1');
			counted++;
		}
		else if (counted)
			_putchar('0');
	}
	if (!counted)
		_putchar('0');
}

