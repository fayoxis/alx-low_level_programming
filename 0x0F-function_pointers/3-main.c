#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int num1, num2;
/* Declare variables to hold the operands */
char *op;
/* Declare a variable to hold the operator */
if (argc != 4)
/* Check if the number of arguments is valid */
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
op = argv[2];
num2 = atoi(argv[3]);
/* Check if the operator is valid */
if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}
/* Check for division by zero */
if ((*op == '/' && num2 == 0) ||
(*op == '%' && num2 == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(op)(num1, num2));
return (0);
}
