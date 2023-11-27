#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * set_bit - Sets the value of a bit to 1 at a given index.
  * @num: Pointer to the number to modify.
  * @index: Index in the number to modify.
  *
  * Return: Returns 1 if the bit was successfully
  * set to 1, or -1 if an error occurred.
  */
int set_bit(unsigned long int *num, unsigned int index)
{
unsigned int max_index = sizeof(unsigned long int) * 8;
/* Check if the index is out of bounds */
if (index >= max_index)
return (-1);

/* Set the bit at the given index to 1 */
*num |= (1UL << index);
return (1);
}
