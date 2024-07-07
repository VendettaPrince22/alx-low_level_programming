#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 * if file cannot be opened or read, return 0
 * if filename is NULL, return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t byts;
	int fd;
	char *buf;
	ssize_t out;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(letters * sizeof(char));
	byts = read(fd, buf, letters);

	if (byts == -1)
	{
		return (0);
	}

	out = write(STDOUT_FILENO, buf, byts);

	if (out == -1)
	{
		return (0);
	}

	free(buf);
	close(fd);

	return (byts);
}
