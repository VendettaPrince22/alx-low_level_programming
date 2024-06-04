#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings; followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings to be passed
 * 
 * If separator is NULL don't print it
 * if a string is NULL, print '(nil)'
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
        va_list my_list;
        unsigned int i;
        char *str;

        va_start(my_list, n);
        i = 0;

        while (i < n)
        {
                str = va_arg(my_list, char *);
                /*Check if string is NULL*/
                if (str == NULL)
                {
                        printf("(nil)");
                }
                else
                {
                        printf("%s", str);
                }
                

                if (separator != NULL && i != n - 1)
                {
                        printf("%s", separator);
                }
                
                i++;
        }

        va_end(my_list);

        printf("\n");
}