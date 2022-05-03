#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: Name of the file to be created
 * @text_content: content of the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	/* write */

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	for (i = 0; *(text_content + i); i++)
		;

	i = write(fd, text_content, i);

	close(fd);

	return (1);
}
