#include "main.h"

/**
 * binary_to_uint - converts a binary
 * @b: string containin
 *
 * Return: the converted
 */
unsigned int binary_to_uint(const char *b)
{
	int in;
	unsigned int dec_value = 0;

	if (!b)
		return (0);

	for (in = 0; b[in]; in++)
	{
		if (b[in] < '0' || b[in] > '1')
			return (0);
		dec_value = 2 * dec_value + (b[in] - '0');
	}

	return (dec_value);
}

