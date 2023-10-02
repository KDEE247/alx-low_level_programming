#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read Text File, then print to STDOUT.
 i* @filename: Text File detail.
 * @letters: nos of letters to be read.
 * Return: w- Actual nos of Bytes read, & printed; 0 if fns fails, or NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
