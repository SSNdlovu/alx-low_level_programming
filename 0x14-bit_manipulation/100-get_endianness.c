#include "main.h"

/**
 * get_endianness - check  a mach lil bg end
 * Return: pass bg, fail lil
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *y = (char *) &x;

	return (*y);
}

