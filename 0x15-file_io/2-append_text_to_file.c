#include "main.h"

/**
 * append_text_to_file - Function that appends text at end of file
 * @filename: Name of the file
 * @text_content: content of a file
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	/* write */

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	for (i = 0; *(text_content + i); i++)
		;

	write(fd, text_content, i);

	close(fd);

	return (1);
}
