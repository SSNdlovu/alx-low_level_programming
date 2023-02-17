#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main clock
 * Description: prints all single digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	char C = 'Z';

	while (C >= 'a')
	{
		putchar(C);
		C--;
	}

	putchar('\n');
	return (0);
}
