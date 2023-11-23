#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - returns num of bits you would need to flip to convert
 *1 number to another.
 *
 * @num: first num
 * @w: second num
 *
 * Return:  num of bits needed to flip
 */

unsigned int flip_bits(unsigned long int num, unsigned long int w)
{
unsigned long int fin = num ^ w, counter = 0;
while (fin)
{
if (fin & 1)
counter++;
fin >>= 1;
}
return (counter);
}
