#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: String to count
 * Return: The length of the string
 */
int _strlen(const char *str)
{
unsigned int length = 0;
for (; str[length] != '\0'; length++)
{
/* Loop until the end of the string */
}
return (length);
}

/**
 * binary_to_uint - Convert a binary string to an unsigned integer
 * @bin: Binary string to be converted
 *
 * Return: The converted unsigned integer
 */
unsigned int binary_to_uint(const char *bin)
{
unsigned int length = 0, count = 0, sum = 0;
if (bin == NULL)
{
return (0);
}
length = _strlen(bin);
for (; length > 0; length--)
{
if (bin[length - 1] != '0' && bin[length - 1] != '1')
{
return (0);
}
if (bin[length - 1] == '1')
{
sum += 1 << count;
}
count++;
}
return (sum);
}
