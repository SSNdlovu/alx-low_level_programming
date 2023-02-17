#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main clock
 * Description: prints all single digit numbers
 * starting from 0, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'Z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
