#include "main.h"
/**
 * error_c - functin that exit code
 * @message: message
 * @extra_info: extra_info
 * @code: code exit
 */
void error_c(const char *message, const char *extra_info, int code)
{
	dprintf(STDERR_FILENO, message, extra_info);
	exit(code);
}
/**
 * error_i - functin that exit code
 * @message: message
 * @extra_info: extra_info
 * @code: code exit
 */
void error_i(const char *message, const int extra_info, int code)
{
	dprintf(STDERR_FILENO, message, extra_info);
	exit(code);
}
/**
 * main - program that copies the content of a file to another file.
 * @argc: argc
 * @argv: argv
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1], *file_to = argv[2];
	int fd_to, fd_from;
	ssize_t READ;
	char buffer[1024];

	if (argc != 3)
		error_c("Usage: cp file_from file_to\n", "", 97);
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_c("Error: Can't read from file %s\n", file_from, 98);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_c("Error: Can't write to %s\n", file_to, 99);
	}
	while ((READ = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		ssize_t WRITE = write(fd_to, buffer, READ);

		if (WRITE == -1)
		{
			close(fd_from);
			close(fd_to);
			error_c("Error: Can't write to %s\n", file_to, 99);
		}
	}
	if (READ == -1)
	{
		close(fd_from);
		close(fd_to);
		error_c("Error: Can't read from file %s\n", file_from, 98);
	}
	if (close(fd_from) == -1)
		error_i("Error: Can't close fd %d\n", fd_from, 100);
	if (close(fd_to) == -1)
		error_i("Error: Can't close fd %d\n", fd_to, 100);
	return (0);
}
