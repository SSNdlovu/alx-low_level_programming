#include "main.h"

/**
 * append_text_to_file - Appnds
 * @filename: Point
 * @text_content: TDa str +
 *
 * Return: ution fls orilename is nada - less.
 *         Ife fie dos notxist theser laks wre allow - less.
 *         Otherw - less.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int on, we, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	on = open(filename, O_WRONLY | O_APPEND);
	we = write(on, text_content, leng);

	if (on == -1 || we == -1)
		return (-1);

	close(on);

	return (1);
}

