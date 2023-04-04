#include "main.h"

/**
 * memset_str - fills a string with a given character
 * @str: pointer to the string
 * @c: character used to fill the string
 * @len: number of characters to fill
 *
 * Return: pointer to the string
 */

char *memset_str(char *str, char c, unsigned int len)
{
    unsigned int i;

    for (i = 0; len > 0; i++)
    {
        str[i] = c;
        len--;
    }
    return str;
}

