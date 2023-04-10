#include "main.h"
/**
* append_text_to_file - appends text at the end of a file
* @text_content: pointer to the string that is to be appended
* @filename: pointer to the file
* Return: 1 on success or -1 otherwise
*/

int append_text_to_file(const char *filename, char *text_content)
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

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (wr == -1 || op == -1)
		return (-1);

	close(op);

	return (1);
}
