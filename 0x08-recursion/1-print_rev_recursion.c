#include "main.h"

/**
 * _print_rev_recursion - Recursively prints a
 * string in reverse order.
 * @str: The string to be reversed.
 *
 * This function takes a string and recursively
 * prints it in reverse.
 * It moves to the next character and calls itself recursively.
 * After the recursive call, it moves back to the
 * previous character and prints it.
 * 
 * Return: None.
 */
void _print_rev_recursion(char *str)
{
if (*str == '\0')
{
return;
}
str++;
_print_rev_recursion(str);
str--;
_putchar(*str);
}
