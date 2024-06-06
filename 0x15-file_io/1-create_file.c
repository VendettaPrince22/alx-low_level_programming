#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 * 
 * Return: 1 on success
 * On failure, return -1 (file cannot be created, files cannot be written)
 * Created file must have permissions: rw-------. If file already exists, don't change permission
 * If file exists, truncate it
 * If filename is NULL return -1
 * If text-content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
        int fd;
        int i;

        i = 0;
        while (text_content[i] != '\0')
        {
                i++;
        }

        if (filename == NULL)
        {
                return (-1);
        }

        fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

        if (text_content == NULL)
        {
                text_content = "";
                write(fd, text_content, i);
        }
        else
        {
                write(fd, text_content, i);
        }
        
        close(fd);

        return (1);
}