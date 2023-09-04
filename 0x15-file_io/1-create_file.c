#include "main.h"

/**
 * create_file - ...
 * @filename: ...
 * @text_content: ...
 *
 * Return: ...
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int w, len = 0;

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		w = write(fd, text_content, len);
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
