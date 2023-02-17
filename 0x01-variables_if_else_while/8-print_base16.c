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
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return(0);
}
