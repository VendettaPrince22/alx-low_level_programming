#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything; prints a new line at the end
 * @format: list of types of arguments passed to the function;
 * c - char
 * i - integer
 * f - float
 * s - char *
 * any other char should be ignored
 * 
 * If string is NULL, print '(nil)'
 */
void print_all(const char * const format, ...)
{
        va_list my_list;
        int x;
        int i;
        char *f_list;
        char *c;
        char *i;
        char *f;
        char *s;

        va_start(my_list, format);
        f_list = "cifs";
        x = 0;
        c = "char";
        i = "int";
        f = "float";
        s = "char *";


        while (format[x] != '\0')
        {
                if (format[x] == f_list[0] || format[x] == f_list[1] || format[x] == f_list[2] || format[x] == f_list[3])
                {
                        va_arg(my_list, char);
                }
                x++;
        }

        va_end(my_list);

        printf("\n");
}