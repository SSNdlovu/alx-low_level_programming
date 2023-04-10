#include "main.h"

/**
 * create_file - Creates
 * @filename: A pointer
 * @text_content: A pointer
 *
 * Return: If fails - -1.
 *         Otherwise - 1.
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
