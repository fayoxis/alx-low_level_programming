#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints a series of strings,
 * followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If the separator is NULL, it is not printed.
 * If one of the strings is NULL, "(nil)" is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int index = 0;

if (n == 0)
{
printf("\n");
return;
}

va_start(strings, n);

while (index < n)
{
str = va_arg(strings, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (separator != NULL && index != n - 1)
printf("%s", separator);

index++;
}

printf("\n");

va_end(strings);
}
