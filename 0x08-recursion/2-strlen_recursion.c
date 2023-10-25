#include "main.h"

/**
 * _strlen_recursion - Recursively calculates
 * the length of a string.
 * @str: The string to be counted.
 * This function recursively counts the length of a given string.
 * It moves to the next character and calls itself recursively.
 * The base case is when the string reaches the null terminator,
 * indicating the end of the string.
 * Return: The length of the string.
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
