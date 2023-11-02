#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - Checks if a string consists only of digits
 * @s: String to be evaluated
 *
 * This function checks if the given string
 * contains only numeric digits.
 * It iterates through each character of the
 * string and checks if it is a digit.
 *
 * Return: 1 if the string consists only
 * of digits, 0 otherwise
 */
int is_digit(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}

/**
 * _strlen - Calculates the length of a string
 * @s: The string to calculate the length of
 *
 * This function takes a string as input
 * and calculates its length by
 * iterating through each character until
 * reaching the null terminator.
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
 * main - Multiplies two positive numbers
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * This function takes two positive numbers
 * as command-line arguments and
 * multiplies them together. The result is
 * then printed to the standard output.
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
char *s1, *s2;
int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();
len1 = _strlen(s1);
len2 = _strlen(s2);
len = len1 + len2 + 1;
result = malloc(sizeof(int) * len);
if (!result)
return (1);
for (i = 0; i <= len1 + len2; i++)
result[i] = 0;
for (len1 = len1 - 1; len1 >= 0; len1--)
{
digit1 = s1[len1] - '0';
carry = 0;
for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
{
digit2 = s2[len2] - '0';
carry += result[len1 + len2 + 1] + (digit1 *digit2);
result[len1 + len2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
result[len1 + len2 + 1] += carry;
}
for (i = 0; i < len - 1; i++)
{
if (result[i])
a = 1;
if (a)
_putchar(result[i] + '0');
}
if (!a)
_putchar('0');
_putchar('\n');
free(result);
return (0);
}
