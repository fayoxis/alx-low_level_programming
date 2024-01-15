#include "main.h"
#include <stdio.h>

/**
 * *_strchr - it locates a character in a string
 * @s: this is the string to search
 * @c: this is char to find
 * Return: return a pointer to the first occurrence of the c
 *  in the string s, or NULL when character is not found
 */
char *_strchr(char *s, char c)
{
int a;
while (1)
{
a = *s++;
if (a == c)
{
return (s - 1);
}
if (a == 0)
{
return (NULL);
}
}
}
