#include "main.h"
#include <stdio.h>

/**
 * convert_binary_to_uint - convert binary to unsigned int
 * @binary_str: A string containing a binary number
 * Return: The converted unsigned int
 */

unsigned int convert_binary_to_uint(const char *binary_str)
{
    int i;
    unsigned int result = 0;

    if (!binary_str)
        return (0);

    for (i = 0; binary_str[i]; i++)
    {
        if (binary_str[i] < '0' || binary_str[i] > '1')
            return (0);
        result = 2 * result + (binary_str[i] - '0');
    }
    return (result);
}

