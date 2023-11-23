#include "main.h"

/**
 * get_endianness - return  endianness of machine
 * @num
 * Return:  if the machine is big endian = 0 ,
 *if the machine is little endian = 0
 */
int get_endianness(void)
{
int num = 1;

return (*((char *) &num) + '0');

}
