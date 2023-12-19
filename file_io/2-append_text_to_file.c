#include "main.h"
/**
 * append_text_to_file - function that append text to file
 * @filename: file path
 * @text_content: text content
 * Return: (1)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t i;
	int bw, file;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (text_content != NULL)
	{
		i = strlen(text_content);
		bw = write(file, text_content, i);
		if (bw == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
