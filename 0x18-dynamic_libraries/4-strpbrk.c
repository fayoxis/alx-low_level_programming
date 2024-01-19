#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - it actaully searches a string for any of a set of bytes
 * @s: this is the string to search
 * @accept: the  string containing the bytes to look for
 *
 * Return: returns pointer to the byte in s that
 * matches one of the bytes in accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
int i, k;
for (i = 0; *s != '\0'; i++)
{
for (k = 0; accept[k] != '\0'; k++)
{
while (*s == accept[k])
{
return (s);
}
}
s++;
}
return (NULL);
}
