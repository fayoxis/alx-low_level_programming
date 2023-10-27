#include "main.h"
/**
 * _memset - Fills a block of memory with a specific value.
 * @s: Starting address of the memory to be filled.
 * @b: The desired value to fill the memory with.
 * @n: Number of bytes to be filled.
 * Return: Pointer to the updated memory block.
 */

char *_memset(char *s, char b, unsigned int n)
{
int k = 0;
for (; n > 0; k++)
{
s[k] = b;
n--;

}

return (s);
}
