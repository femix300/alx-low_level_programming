#include "main.h"
/**
* read_textfile - function that reads a text file
* and prints it to the POSIX standard output
* @filename: a pointer to the file
* @letters: is the number of letters the function should read
* and print
* Return: the actual number of letters it could read and print
* or 0 on failure
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;

	ssize_t op, wr, re;

	if (!filename)
		return (0);

	buff = (char *) malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buff, re);

	if (op == -1 || re == -1 || wr == -1)
	{
		free(buff);
		return (0);
	}

	if (re != wr)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(op);

	return (wr);
}
