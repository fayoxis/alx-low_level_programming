#include "main.h"

/**
 * *_strcpy - it copies the string pointed  by source
 * including terminating null
 * @dest:this is s  pointer to the buffer
 * in which we copy the string
 * @src: it is string to be copied
 *
 * Return: returns the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int length, i;

length = 0;

while (src[length] != '\0')
{
length++;
}
for (i = 0; i < length; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
