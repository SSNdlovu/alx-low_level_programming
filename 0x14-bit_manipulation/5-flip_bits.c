#include "main.h"

/**
 * flip_bits - counted the num bit cha
 * gt frm 1 num anth
 * @n: 1 num
 * @m: 2 num
 *
 * Return: num bit cha
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, countt = 0;
	unsigned long int curr;
	unsigned long int excl = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		curr = excl >> x;
		if (curr & 1)
			countt++;
	}

	return (countt);
}

