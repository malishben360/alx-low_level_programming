#include "main.h"

/**
  * create_file - creates a file
  * @filename: name of the file to create
  * @text_content: string to write to the file
  *
  * Return: Always 1 (Success), or -1 (Failed).
  */
int create_file(const char *filename, char *text_content)
{
	int i, fd, write_letters;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, S_IRUSR | S_IWUSR);
		if (fd == -1)
			return (-1);

		close(fd);
		return (1);
	}
	fd = open(filename, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;

	write_letters = write(fd, text_content, i);
	if (write_letters == -1)
		return (-1);

	close(fd);
	return (1);
}
