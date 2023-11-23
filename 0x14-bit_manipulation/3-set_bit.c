#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * set_bit - Set value of a bit to 1 at  given index
  * @num:  n to modify
  * @index: index in the number to modify
  *
  * Return: if the bit was successfully set 1 , or -1 if an error occurred
  */
int set_bit(unsigned long int *num, unsigned int index)
{
/* Check if  index is out of bounds */
if (index >= sizeof(unsigned long int) * 8)
return (-1);

/* Set the bit at the given index to 1 */
*num |= (1UL << index);
return (1);
}
