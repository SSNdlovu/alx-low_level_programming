#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Red txtile pri ST
 * @filename: txt fiebng ad
 * @letters: num of letersbe rd
 * Return: with- act num ofbyt rd nd pint
 *        nada whn ftion fls or flame is 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fud;
	ssize_t we;
	ssize_t to;

	fud = open(filename, O_RDONLY);
	if (fud == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	to = read(fud, buff, letters);
	we = write(STDOUT_FILENO, buff, to);

	free(buff);
	close(fud);
	return (we);
}

