#include "main.h"

/**
 * check_palindrome - Recursively checks if a substring
 * of a given string is a palindrome.
 * @str: The string to be checked.
 * @start: The starting index of the substring.
 * @end: The ending index of the substring.
 *
 * Returns: 1 if the substring is a palindrome, 0 otherwise.
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
 * This function checks if a given string is a palindrome.
 * It calls a helper function check_palindrome
 * to perform the actual palindrome check.
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
 * This function recursively calculates the length of a given string.
 * It increments the length by 1 for each character in the string,
 * until it reaches the null terminator, indicating the end of the string.
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
