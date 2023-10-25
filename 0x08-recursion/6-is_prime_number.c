#include <stdio.h>
#include "main.h"

int check_prime(int num, int i);

/**
 * is_prime_number - Checks if a number is prime.
 * @num: The number to be checked.
 * This function checks if a given number is prime.
 * It recursively checks if the number is divisible by any number
 * from 2 to the square root of the number.
 * If the number is divisible by any of these numbers, it is not prime.
 * If the number is less than 2, it is not prime.
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int num)
{
return (check_prime(num, num - 1));
}

/**
 * check_prime - Recursively checks if a number is prime.
 * @num: The number to be checked.
 * @i: The divisor to be tested.
 *
 * This function is a helper function used in checking
 * if a given number is prime.It takes a number and a divisor
 * as input and recursively checks if the number is prime.
 * The function checks if the number is divisible by the divisor.
 * If it is, the number is not prime and 0 is returned.
 * If the divisor exceeds the square root of the number,
 * the number is prime and 1 is returned.
 * Return: 1 if the number is prime, 0 otherwise.
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
