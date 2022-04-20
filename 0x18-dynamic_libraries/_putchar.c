#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes character c to stdout
 * @c: The character to print
 * return: on success 1, on error -1 and errno 
 */
int _putchar(char c)
{
return (write(1, $c, 1));
}
