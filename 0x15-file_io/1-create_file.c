#include "main.h"
/**
* create_file - a function that creates a file
* @filename: pointer to the file to be created
* @text_content: pointer to the string that is
* to be written into the file
* Return: 1 on success and -1 otherwise
*/

int create_file(const char *filename, char *text_content)
{
	int wr, op;

	int len;

	len = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, len);

	if (wr == -1 || op == -1)
		return (-1);

	close(op);

	return (1);
}
