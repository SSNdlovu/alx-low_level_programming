#include "main.h"

/**
 * get_endianness - checks if a
 * Return: 0 fo
 */
int get_endianness(void)
{
	unsigned int in = 1;
	char *co = (char *) &in;

	return (*co);
}

