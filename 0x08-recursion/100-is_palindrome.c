#include "main.h"

/**
 * check_palindrome - Check if a string is a palindrome.
 * @str: The string to be checked.
 * @start: The starting index of the substring.
 * @end: The ending index of the substring.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int check_palindrome(char *str, int start, int end)
{
if (start >= end)
return (1);

if (str[start] != str[end])
return (0);

return (check_palindrome(str, start + 1, end - 1));
}

/**
 * is_palindrome - Returns if a string is a palindrome.
 * @str: The string value to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *str)
{
int length = _strlen_recursion(str) - 1;
return (check_palindrome(str, 0, length));
}

/**
 * _strlen_recursion - Get the length of a string.
 * @str: The string to get the length.
 *
 * Return: The string length.
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
