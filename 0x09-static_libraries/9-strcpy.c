#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int c = 0;
while (c >= 0)
{
*(dest + c) = *(src + c);
if (*(src + c) == '\0')
break;
c++;
}
return (dest);
}
