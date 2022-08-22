#include "main.h"

/**
 * main - copies contents of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd_rd, fd_wrt, k, j, n;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_rd = open(argv[1], O_RDONLY);
	if (fd_rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_wrt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((k = read(fd_rd, buf, BUFSIZ)) > 0)
	{
		if (fd_wrt < 0 || write(fd_wrt, buf, k) != k)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_rd);
			exit(99);
		}
	}
	if (k < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	j = close(fd_rd);
	n = close(fd_wrt);
	if (j < 0 || n < 0)
	{
		if (j < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_rd);
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_wrt);
		exit(100);
	}
	return (0);
}

