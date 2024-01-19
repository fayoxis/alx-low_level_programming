#include "main.h"
#include <stdio.h>

/**
 * *_strchr - it allocates a character in a string
 * @s: this is the string to search
 * @c: it is char to find
 *
 * Return: returns a pointer to the first character
 * c in the string s, or NULL if the character  unfound
 */
char *_strchr(char *s, char c)
{
int y;

while (1)
{
y = *s++;
if (y == c)
{
return (s - 1);
}
if (y == 0)
{
return (NULL);
}
}
}
