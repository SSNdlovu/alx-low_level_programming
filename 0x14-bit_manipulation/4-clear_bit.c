#include "main.h"

/**
 * clear_bit - set th val giv bits neu
 * @n: point num tocha
 * @index: ind of them bits clr
 *
 * Return: pass succ, fail failu
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

