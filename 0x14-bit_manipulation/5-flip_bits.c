#include "main.h"

/**
 * flip_bits - counts
 * to get
 * @n: first
 * @m: second
 *
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int in, counted = 0;
	unsigned long int currents;
	unsigned long int exclusives = n ^ m;

	for (in = 63; in >= 0; in--)
	{
		currents = exclusives >> in;
		if (currents & 1)
			counted++;
	}

	return (counted);
}

