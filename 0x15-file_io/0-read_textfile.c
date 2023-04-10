#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- R
 * @filename: text file
 * @letters: number of letters
 * Return: w- actual number
 * 0 when function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bud;
	ssize_t fud;
	ssize_t sbu;
	ssize_t q;

	fud = open(filename, O_RDONLY);
	if (fud == -1)
		return (0);
	bud = malloc(sizeof(char) * letters);
	q = read(fud, bud, letters);
	sbu = write(STDOUT_FILENO, bud, q);

	free(bud);
	close(fud);
	return (sbu);
}
