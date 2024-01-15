#include "main.h"

/**
 * _strlen - this will returns the length of a string
 * @s: this is the string to be evaluate
 *
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
