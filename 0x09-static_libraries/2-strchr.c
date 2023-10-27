#include "main.h"
/**
 * _strchr - Locates a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 * Return: A pointer to the first occurrence of the character c,
 * or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
unsigned int k = 0;
for (; *(s + k) != '\0'; k++)
if (*(s + k) == c)
return (s + k);

if (*(s + k) == c)
return (s + k);
return ('\0');
}
