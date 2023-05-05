#include "main.h"

/**
 * print_binary - print bin equdec num
 * @n: num prnt bin
 */
void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int curr;

	for (x = 63; x >= 0; x--)
	{
		curr = n >> i;

		if (curr & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

