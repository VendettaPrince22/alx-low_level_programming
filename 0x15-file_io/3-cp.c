#include <fcntl.h>
#include <unistd.h>

/**
 * main - copies the content of a file to another file
 * 
 * Return: Always 0
 * Usage: cp file_from file_to
 * If number of arguments is not correct, exit with code 97 and print error message to stderr
 * If file_to exists, truncate it
 * If file_from doesn't exist / can't read, exit with code 98 and print error message to stderr
 * If can't create / write to file_to, exit with code 99 and print error message to stderr
 * If you cannot close a file descriptor, exit with code 100 and print error message to stderr
 * Permission of created file: rw-rw-r--, if file exists; don't change permissions
 * Must read 1024 bytes at a time from file_from. Use a buffer
 */
int main(int ac, char **av)
{
        int fd1;
        int fd2;
        char *f_from;
        char *f_to;
        ssize_t byt;
        char *buf;
        int count;
        ssize_t byts;
        ssize_t i;

        f_from = av[1];
        f_to = av[2];
        fd1 = open(f_from, O_RDONLY);
        fd2 = open(f_to, O_WRONLY | O_TRUNC | O_CREAT | O_APPEND, 0664);

        count = 1024;
        i = 0;
        while (byts != 0)
        {
                byts = read(fd1, buf[i], count);
                byt = write(fd2, buf, count);

                i += count;
                count += count;
        }
        
        

        close(fd2);
        close(fd1);

        return (0);
}