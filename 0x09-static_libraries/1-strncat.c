#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: this is the  destination.
 * @src: the source of the file .
 * @n: maximum number of bytes to be used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int c = 0, c2 = 0;
while (*(dest + c) != '\0')

{
c++;
}
while (c2 < n)
{
*(dest + c) = *(src + c2);
if (*(src + c2) == '\0')
break;


c++;
c2++;
}
return (dest);
}
