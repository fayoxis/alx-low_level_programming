#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using a function pointer
 * @name: string to be printed
 * @f: pointer to the function that will print the name
 * Return: void
 **/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
