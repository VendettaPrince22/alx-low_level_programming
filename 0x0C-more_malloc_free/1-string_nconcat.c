#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings 
 * 
 * @s1: first string
 * @s2: second string
 * @n: bytes of second string; if greater or equal to s2 length, use entire string s2
 * 
 * Return: pointer to space containing s1 and first n bytes of s2
 * On fail, return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *pts;
    unsigned int count;
    unsigned int i;
    unsigned int j;
    unsigned int k;

    /*Get size of s1*/
    i = 0;
    while (s1[i] != '\0')
    {
        i++;
    }

    /*Get size of s2*/
    k = 0;
    while (s2[k] != '\0')
    {
        k++;
    }

    /*Check if s2 length is less than n*/
    if (k < n)
    {
        n = k;
    }

    /*Allocate memory so that concatenated string can fit*/
    n += i;
    pts = malloc(n * sizeof(char));

    /*place s1 in the first i bytes / memory*/
    for (count = 0; count < i; count++)
    {
        pts[count] = s1[count];
    }

    /*place s2 in the bytes following s1 in memory*/
    for (count = i, j = 0; count < n; count++, j++)
    {
        pts[count] = s2[j];
    }

    /*On fail*/
    if (pts == NULL)
    {
        return (NULL);
    }

    return (pts);
}