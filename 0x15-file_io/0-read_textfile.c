#include "main.h"

/**
 * read_textfile - ...
 * @filename: ...
 * @letters: ...
 *
 * Return: ...
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedes;
	char *buffer;
	ssize_t bytes;
	ssize_t bytes_r;

	if (filename == NULL)
		return (0);
	filedes = open(filename, O_RDONLY);
	if (filedes == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(filedes);
		return (0);
	}
	bytes = read(filedes, buffer, letters);
	if (bytes == -1)
	{
		close(filedes);
		free(buffer);
		return (0);
	}
	bytes_r = write(STDOUT_FILENO, buffer, bytes);
	if (bytes_r == -1 || bytes_r != bytes)
	{
		close(filedes);
		free(buffer);
		return (0);
	}
	close(filedes);
	free(buffer);
	return (bytes);
}
