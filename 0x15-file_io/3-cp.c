#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocate
 * @file: The name of
 *
 * Return: A pointe
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
 * close_file - Closes
 * @fd: The file
 */
void close_file(int fud)
{
	int ce;

	ce = close(fud);

	if (ce == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fud);
		exit(100);
	}
}

/**
 * main - Copies the content
 * @argc: The number of argument
 * @argv: An arr
 *
 * Return: 0 on success.
 *
 * Description: If the exit code 97.
 *              If file_from does notit code 98.
 *              If fireateor written to - exit code 99.
 *              If f_froe closed - exit code 100.
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

	bufferr = create_bufferr(argv[2]);
	fromm = open(argv[1], O_RDONLY);
	rr = read(from, bufferr, 1024);
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
