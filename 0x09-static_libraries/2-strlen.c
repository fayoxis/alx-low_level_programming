#include "main.h"

/**
 * _strlen - Computes the length of a string.
 * @s: this is Input string.
 * Return: Length of the string.
 */
int _strlen(char *s)
{
int c = 0;
while (*(s + c) != '\0')
c++;
	
return (c);
}
