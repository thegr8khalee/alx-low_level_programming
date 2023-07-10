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
	if (filename == NULL)
		return (0);

	int filedes = open(filename, O_RDONLY);

	if (filedes == -1)
		return (0);

	char *buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		close(filedes);
		return (0);
	}

	ssize_t bytes = read(filedes, buffer, letters);

	if (bytes == -1)
	{
		close(filedes);
		free(buffer);
		return (0);
	}

	ssize_t bytes_r = write(STDOUT_FILENO, buffer, bytes);

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
