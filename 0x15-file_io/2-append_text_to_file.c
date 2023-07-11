#include "main.h"

/**
 * append_text_to_file - ...
 * @filename: ...
 * @text_content: ...
 *
 * Return: ...
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedes;
	size_t len = 0;
	ssize_t bytes_w;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (access(filename, F_OK) == 0 ? 1 : -1);
	filedes = open(filename, O_WRONLY | O_APPEND);
	if (filedes == -1)
		return (-1);

	while (text_content[len] != '\0')
		len++;
	bytes_w = writeb(filedes, text_content, len);
	close(filedes);

	if (bytes_w == -1 || (size_t)bytes_w < len)
		return (-1);
	return (1);
}
