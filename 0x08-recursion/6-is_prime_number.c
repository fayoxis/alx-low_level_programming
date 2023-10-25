#include <stdio.h>
#include "main.h"

int check_prime(int num, int i);

/**
 * is_prime_number - Checks if a number is prime
 * @num: The number to be checked
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int num)
{
return (check_prime(num, num - 1));
}

/**
 * check_prime - Recursively checks if a number is prime
 * @num: The number to be checked
 * @i: The divisor to be tested
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int check_prime(int num, int i)
{
if (num <= 1)
return (0);
if (i == 1)
return (1);
if (num % i == 0)
return (0);
return (check_prime(num, i - 1));
}
