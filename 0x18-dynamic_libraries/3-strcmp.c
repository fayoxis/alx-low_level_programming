#include "main.h"

/**
 * _strcmp - it compares two strings
 * @s1: this is first string to compare
 * @s2: it is the second string to compare
 *
 * Return: returns less than 0 if s1 is less
 * than s2, 0 if they're equal
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == '\0')
{
return (0);
}
s1++;
s2++;
}
return (*s1 - *s2);
}
