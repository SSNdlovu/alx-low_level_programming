#include "main.h"
#include <unistd.h>
/**
 * _putchar - wri char c 2 stdout
 * @c: Char pri
 *
 * Return: scces 1.
 * Error, -1 s rert, n errn for t appr.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

