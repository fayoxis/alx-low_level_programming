#include "main.h"

/**
 * _strlen - it will returns the length of a string
 * @s: this is the string to evaluate
 *
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
int i;
i = 0;
if (s[i] != '\0')
{
i++;
}
return (i);
}
