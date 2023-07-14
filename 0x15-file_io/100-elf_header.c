#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define ELF_MAGIC_SIZE 4
#define ELF_HEADER_SIZE 52

/**
 * print_error - ...
 * @error_message: ...
 *
 * Return: ...
 */
void print_error(const char *error_message)
{
	fprintf(stderr, "%s\n", error_message);
	exit(98);
}

/**
 * print_elf_header - ...
 * @elf_header: ...
 * Return: ...
 */
void print_elf_header(const unsigned char *elf_header)
{
	int i;

	printf("  Magic::   ");
	for (i = 0; i < ELF_MAGIC_SIZE; i++)
		printf("%02x ", elf_header[i]);
	printf("\n");

	printf("  Class:                             ");
	if (elf_header[4] == 1)
		printf("ELF32\n");
	else if (elf_header[4] == 2)
		printf("ELF64\n");
	else
		printf("Invalid\n");
	printf("  Data:                              ");
	if (elf_header[5] == 1)
		printf("2's compliment, little endian\n");
	else if (elf_header[5] == 2)
		printf("2's compliment, big endian\n");
	else
		printf("Invalid\n");

	printf("  Version:                           %d (current)\n", elf_header[6]);
	printf("  OS/ABI:                            %d\n", elf_header[7]);
	printf("  ABI Version:                       %d\n", elf_header[8]);
	printf("  Type:                              ");
	printf("%d\n", *(unsigned short *)(elf_header + 16));
	printf("  Entry point address:               ");
	printf("0x%x\n", *(unsigned int *)(elf_header + 24));
}

/**
 * main: ...
 * @argc: ...
 * @argv: ...
 * Return: ...
 */
int main(int argc, char *argv[])
{
	const char *elf_filename;
	int fd;
	unsigned char elf_header[ELF_HEADER_SIZE];
	ssize_t bytes_read;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	elf_filename = argv[1];
	fd = open(elf_filename, O_RDONLY);
	if (fd == -1)
	{
		print_error("Error: Unable to open the file");
	}

	bytes_read = read(fd, elf_header, ELF_HEADER_SIZE);
	if (bytes_read == -1)
	{
		close(fd);
		print_error("Ërror: Unable to read the file");
	}
	if (bytes_read < ELF_HEADER_SIZE)
	{
		close(fd);
		print_error("Error: Invalid ELF file");
	}
	print_elf_header(elf_header);
	close(fd);
	return (0);
}
