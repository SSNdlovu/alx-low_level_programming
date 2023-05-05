#include "main.h"

/**
 * get_bit - rtrn val bits indx in dec num
 * @n: num srch
 * @index: ind bits
 *
 * Return: val bits
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitv;

	if (index > 63)
		return (-1);

	bitv = (n >> index) & 1;

	return (bitv);
}

