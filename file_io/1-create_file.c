#include "main.h"
/**
 * create_file - Creates a file and writes text to it.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t len = 0;

	if (filename == NULL || *filename == '\0')
		return (-1);
	fd = creat(filename, 0600);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		bytes_written = write(fd, text_content, len);

		if (bytes_written == -1 || (size_t)bytes_written != len)
		{
			close(fd);
			unlink(filename);
			return (-1);
		}
	}
	if (close(fd) == -1)
	{
		unlink(filename);
		return (-1);
	}
	return (1);
}
