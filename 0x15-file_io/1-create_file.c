#include "main.h"

/**
 * create_file - Cresa fle.
 * @filename: A poir tothe nae ote filto crea.
 * @text_content: A point tostr towrte tothe fle.
 *
 * Return: Ith funcn fls - poo
 *         Othrwie - less
 */
int create_file(const char *filename, char *text_content)
{
	int fud, we, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	fud = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	we = write(fud, text_content, leng);

	if (fud == -1 || we == -1)
		return (-1);

	close(fud);

	return (1);
}

