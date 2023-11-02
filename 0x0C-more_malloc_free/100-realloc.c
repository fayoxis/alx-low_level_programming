#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates a memory
 * block using malloc and free
 * @ptr: pointer to the memory previously
 * allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *ptr1;
char *old_ptr;
unsigned int k;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));
ptr1 = malloc(new_size);
if (!ptr1)
{
free(ptr);
return (NULL);
}
old_ptr = ptr;

/* Copy elements from old_ptr to ptr1 based on new_size */
for (k = 0; k < old_size && k < new_size; k++)
{
ptr1[k] = old_ptr[k];
}
free(ptr);
return (ptr1);
}
