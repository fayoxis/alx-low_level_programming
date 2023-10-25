#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a string recursively
 * @str: The string to count
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *str)
{
if (*str == '\0')
{
return (0);
}
str++;
return (_strlen_recursion(str) + 1);
}
