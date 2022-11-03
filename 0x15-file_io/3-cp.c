#include "main.h"

/**
  * main - copy the content of a file to another file
  * @argc: number of arguments passed
  * @argv: array of arguments passed
  *
  * Return: 98 (Success), or if failed (97, 99, 100).
  */
int main(int argc, char *argv[])
{
	int fd_0, fd_1, fd_from, fd_to, read_bytes, write_bytes;
	char *buf;

	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		exit(98);
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY, 00664);
	read_bytes = read(fd_from, buf, 1024);
	if (fd_from == -1 || read_bytes == -1)
	{
		dprintf(4, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from), close(fd_to);
		exit(98);
	}
	write_bytes = write(fd_to, buf, read_bytes);
	if (write_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from), close(fd_to);
		exit(99);
	}
	fd_0 = close(fd_from), fd_1 = close(fd_to);
	if (fd_0 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_0);
		exit(100);
	}
	if (fd_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1);
		exit(100);
	}
	free(buf);
	exit(98);
}
