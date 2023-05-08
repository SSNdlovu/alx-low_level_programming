#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Alloc
 * @file: Te nme
 *
 * Return: A pinter tothe newly-
 */
char *create_buffer(char *file)
{
	char *bufferr;

	bufferr = malloc(sizeof(char) * 1024);

	if (bufferr == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (bufferr);
}

/**
 * close_file - Clos descrip
 * @fd: he ile descrr toe cld
 */
void close_file(int fd)
{
	int cc;

	cc = close(fd);

	if (cc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Cos theco
 * @argc: Th num of aguents supped to the progr
 * @argv: A arrof po
 *
 * Return: nada o scess.
 *
 * Description: If th arg 97.
 * If file_from doe not ex 98.
 * If file_to cannobe creat 99.
 * If fileto r fil_fom c 100.
 */
int main(int argc, char *argv[])
{
	int fromm, too, rr, ww;
	char *bufferr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bufferr = create_buffer(argv[2]);
	fromm = open(argv[1], O_RDONLY);
	rr = read(from, buffer, 1024);
	too = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fromm == -1 || rr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bufferr);
			exit(98);
		}

		ww = write(too, bufferr, rr);
		if (too == -1 || ww == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bufferr);
			exit(99);
		}
		rr = read(fromm, bufferr, 1024);
		too = open(argv[2], O_WRONLY | O_APPEND);

	} while (rr > 0);

	free(bufferr);
	close_file(fromm);
	close_file(too);
	return (0);
}

