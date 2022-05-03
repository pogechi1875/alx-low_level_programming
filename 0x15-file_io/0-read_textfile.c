#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints
 * @filename: Name of the file
 * @letters: Number of letters to be read and print
 * Return: The number of letter or if it fails 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bt;
	char *buff;

	if (filename == NULL)
		return (0);

	/* read */

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
		return (0);

	bt = read(fd, buff, letters);

	close(fd);

	/* write */

	write(STDOUT_FILENO, buff, bt);

	return (bt);
}
