#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to be searched.
 * @accept: the set of bytes to search for.
 *
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept,or NULL if no
 * such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int k, v;
for (k = 0; *(s + k) != '\0'; k++)
{

for (v = 0; *(accept + v) != '\0'; v++)
{
if (*(s + k) == *(accept + v))
return (s + k);
}
}
return ('\0');
}
