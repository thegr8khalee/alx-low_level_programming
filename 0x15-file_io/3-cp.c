#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * main - ...
 * @argc: ...
 * @argv: ...
 * 
 * Return: ...
 */
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int fd_dest;
	char *buffer[BUFFER_SIZE];
	int fd_src;
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_src = open(file_from, O_RDONLY);

	if (fd_src == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	
	if (fd_dest == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while ((bytes_read = read(fd_src, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_dest, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			fprintf(stderr, "Error: CAn't write to %s\n", file_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd_src) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd_src);
		exit(100);
	}
	if (close(fd_dest) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}
	return (0);
}
