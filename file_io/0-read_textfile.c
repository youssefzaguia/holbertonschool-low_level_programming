#include "main.h"
/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename : the name of the file
 * @letters: letters to print
 * Return: the actual number of letters it could read and print (bw)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int br, bw;

	char *text;

	if (filename == NULL)
		return (0);

	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	br = read(file, text, letters);
	if (br == -1)
	{
		close(file);
		free(text);
		return (0);
	}
	bw = write(STDOUT_FILENO, text, br);

	if (bw == -1)
	{
		free(text);
		close(file);
		return (0);
	}

	close(file);
	return (bw);
}
