#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: name of the file
 * @text_content: string to add at the end of the file, NULL terminated
 *
 * Return: 1 on success, -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, don't add anything.
 * If text_content is NULL and file exists,
 * return 1 and -1 if it doesn't exist or have no permission to write
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byt;
	int count;

	if (text_content != NULL)
	{
		count = 0;
		while (text_content[count] != '\0')
		{
			count++;
		}
	}

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (text_content != NULL)
	{
		byt = write(fd, text_content, count);
		if (byt == -1)
		{
			return (-1);
		}
	}

	close(fd);

	return (1);
}
