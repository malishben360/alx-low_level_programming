#include "main.h"

/**
  * append_text_to_file - adds a text to a file
  * @filename: file to write to
  * @text_content: text to be added
  *
  * Return: Always 1 (Success), or -1 if failed.
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, fd, write_bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;

		write_bytes = pwrite(fd, text_content, i, O_APPEND);
		if (write_bytes == -1)
		{
			close(fd);
			return (-1);
		}
		close(fd);
		return (1);
	}
	close(fd);
	return (1);
}
