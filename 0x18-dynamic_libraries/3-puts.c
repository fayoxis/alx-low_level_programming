#include "main.h"

/**
 * _puts - it will print a string to stdout
 * @str: this is the pointer that point to
 * the string to print
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
