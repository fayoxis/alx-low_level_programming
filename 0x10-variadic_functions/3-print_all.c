#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints any type of data
 * @format: list of types of arguments
 * passed to the function
 */
void print_all(const char * const format, ...)
{
const char *separator = "";
int index = 0;
va_list args;
va_start(args, format);
if (format == NULL)
{
printf("\n");
return;
}

while (format[index])
{
switch (format[index])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", separator, str);
}
break;
default:
index++;
continue;
}
separator = ", ";
index++;
}
printf("\n");
va_end(args);
}
