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
	int w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		w = write(fd, text_content, sizeof(text_content) - 2);
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
