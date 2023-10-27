#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to be copied
 * Return: pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
int k;
/* Copy characters from source to destination*/
for (k = 0; k < n && src[k] != '\0'; k++)
{
dest[k] = src[k];
}

/* If the length of the source string is less than n,*/
/* fill the remaining space in the destination string with null characters*/
for (; k < n; k++)

{
dest[k] = '\0';
}
/*Return a pointer to the destination string*/
return (dest);
}
