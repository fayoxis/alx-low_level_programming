#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
int k;

int v;
k = 0;
while (dest[k] != '\0')
{
k++;
}


v = 0;
while (src[v] != '\0')
{
dest[k] = src[v];
k++;
v++;
}
dest[k] = '\0';
return (dest);
}
