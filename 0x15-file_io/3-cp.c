#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @file: name of file for which the buffer is storing chars
 * Return: pointer to allocated buffer
 */

char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (!buff)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - closes file descriptors
 * @fd: file descriptor that is to be closed
 */

void close_file(int fd)
{
	int cls;

	cls = close(fd);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file into another file
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 *
 * Description: If argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int src, re, wr;
	int dest, x;
	char *buff;

	x = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	src = open(argv[1], O_RDONLY);
	re = read(src, buff, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (re == -1 || src == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wr = write(dest, buff, re);

		if (dest == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		re = read(src, buff, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);

	} while (re > x);
	free(buff);
	close_file(src);
	close_file(dest);

	return (0);

}
