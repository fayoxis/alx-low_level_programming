#include "main.h"

/**
 * _puts_recursion - Recursively prints a
 * string and adds a new line at the end.
 * @str: The string to be printed.
 *
 * Returns: None.
 */
void  _puts_recursion(char *str)
{
if (*str == '\0')
{
_putchar('\n');
return;
}
_putchar(*str);
str++;
_puts_recursion(str);
}
