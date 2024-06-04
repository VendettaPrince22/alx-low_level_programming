#include <stdarg.h>

/**
 * sum_them_all - returns sum of all its parameters
 * @n: first integer
 * 
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
        unsigned int sum;
        unsigned int i;
        va_list my_list;

        va_start(my_list, n);

        i = 0;
        sum = 0;
        while (i < n)
        {
                sum += va_arg(my_list, int);
                i++;
        }
        
        va_end(my_list);

        return (sum);
}