#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - Searches a given string for any
 * occurrence of a specific set of bytes.
 * @s: the string to search
 * @accept: The string containing the bytes to look for.
 *
 * Return: A pointer to the byte in 's' that matches
 * one of the bytes in 'accept',
 *or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
int k, j;

for (k = 0; *s != '\0'; k++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (*s == accept[j])
{
return (s);
}
}
s++;
}

return (NULL);
}
