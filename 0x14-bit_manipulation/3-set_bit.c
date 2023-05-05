#include "main.h"

/**
 * set_bit - set bits ind pass
 * @n: point num chng
 * @index: ind set pass
 *
 * Return: pos pass, neg fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

