#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Adds two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - Returns the difference between two numbers.
 * @a: The minuend.
 * @b: The subtrahend.
 *
 * Return: The result of subtracting @b from @a.
 *
 * Description:
 * This function calculates the difference
 * between the minuend @a and the subtrahend @b.
 * The result is obtained by subtracting @b from @a.
 * For example, if @a is 7 and @b is 3,
 * the function will return 4 since 7 - 3 = 4.
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - Multiplies two numbers.
 * @a: The multiplicand.
 * @b: The multiplier.
 *
 * Return: The product of @a and @b.
 *
 * Description:
 * This function calculates the product of the
 * multiplicand @a and the multiplier @b.
 * The result is obtained by multiplying @a by @b.
 * For example, if @a is 5 and @b is 3, the
 * function will return 15 since 5 * 3 = 15.
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The quotient of a and b.
 */

int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - Returns the remainder
 * of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by
 */
int op_mod(int a, int b)
{
	return (a % b);
}
