#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the appropriate function to perform
 * the requested operation.
 * @s: The operator passed as an argument.
 *
 * Return: A pointer to the function corresponding to the
 * given operator.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};

int k = 0;
while (ops[k].op != NULL && *(ops[k].op) != *s)
k++;
return (ops[k].f);
}
