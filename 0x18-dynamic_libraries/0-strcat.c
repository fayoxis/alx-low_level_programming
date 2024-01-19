#include "main.h"

/**
 * _strcat - it concrete concatenates two strings
 * @dest: it is the string to append to
 * @src: it is the  string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
j = 0;
if(dest[i] != '\0')
i++;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
