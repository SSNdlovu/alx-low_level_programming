#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - prints all single digits number of base 10 starting from 0
 *
 * Returns: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
