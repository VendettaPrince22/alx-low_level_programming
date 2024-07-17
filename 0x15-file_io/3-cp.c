#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - copies the content of a file to another file.
 * 
 * Return: Always 0.
 * Usage: cp file_from file_to.
 * If number of arguments is not correct,
 * exit with code 97 and print error message to stderr.
 * If file_to exists, truncate it.
 * If file_from doesn't exist / can't read,
 * exit with code 98 and print error message to stderr.
 * If can't create / write to file_to,
 * exit with code 99 and print error message to stderr.
 * If you cannot close a file descriptor,
 * exit with code 100 and print error message to stderr.
 * Permission of created file: rw-rw-r--,
 * if file exists; don't change permissions.
 * Must read 1024 bytes at a time from file_from. Use a buffer.
 */
int main(int ac, char **av)
{
	int fd_from;
	char *file_from;
	char *buffer;
	int fd_to;
	char *file_to;
	size_t count;

	if (ac < 2)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(99);
	}

	count = 1024;
	buffer = malloc(sizeof(char *) * count);
	file_from = av[1];
	file_to = av[2];

	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 00664);

	read(fd_from, buffer, count);
	write(fd_to, buffer, count);

	free(buffer);

	return (0);
}
