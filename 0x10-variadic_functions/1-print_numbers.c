#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints a sequence of numbers,
 * followed by a new line.
 * @separator: The string to be printed between
 * numbers. (NULL if no separator)
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int k = 0;

va_start(args, n);

if (n > 0)
{
printf("%d", va_arg(args, int));
k++;
}

while (k < n)
{
if (separator != NULL)
printf("%s", separator);

printf("%d", va_arg(args, int));
k++;
}

printf("\n");

va_end(args);
}
