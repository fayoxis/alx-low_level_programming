#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to convert
 * one number to another.
 *
 * @num: the first number
 * @w: the second number
 *
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int num, unsigned long int w)
{
unsigned long int fin = num ^ w;
unsigned int counter = 0;
for (; fin > 0; fin >>= 1)
{
if (fin & 1)
counter++;
}
return (counter);
}
