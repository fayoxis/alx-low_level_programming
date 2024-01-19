#include "main.h"

/**
 * _strcpy - Copies the string pointed to by 'src'
 * to the buffer pointed to by 'dest',
 * including the terminating null byte ('\0').
 * @dest: Pointer to the destination buffer.
 * @src: String to be copied.
 *
 * Return: A pointer to the destination buffer 'dest'.
 */
char *_strcpy(char *dest, char *src)
{
int len, i;
len = 0;
while (src[len] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
