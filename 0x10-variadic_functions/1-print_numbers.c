#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers; followed by a line
 * @separator: string to be pinted between numbers
 * @n: number of integes passed to the function
 * 
 * if separator is NULL, don't print it
 * print a new line at end of function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
        va_list my_list;
        unsigned int i;

        va_start(my_list, n);
        i = 0;
        while (i < n)
        {
                printf("%d", va_arg(my_list, unsigned int));
                if (separator != NULL && i != n - 1)
                {
                        printf("%s", separator);
                }
                
                i++;
        }
        printf("\n");
        
        va_end(my_list);
}