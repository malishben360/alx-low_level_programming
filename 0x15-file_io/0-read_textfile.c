#include "main.h"

/**
  * read_textfile - reads a text file and prints to the POSIX stdout
  * @filename: file to read from
  * @letters: number of bytes to read
  *
  * Return: Actual number of text read, or 0 if failed.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int read_letters, write_letters;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY);
	if (fd == -1 || buf == NULL)
		return (0);

	read_letters = read(fd, buf, letters);
	if (read_letters == -1)
		return (0);

	write_letters = write(STDIN_FILENO, buf, read_letters);
	if (write_letters == -1 || write_letters != read_letters)
		return (0);

	close(fd);
	free(buf);
	return (read_letters);
}
