#include "main.h"

/**
 * _strncpy - it copies a string
 * @dest: this is the destination string
 * @src: the  source string
 * @n: this is the number of bytes to copy
 *
 * Return: returns pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
if (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
