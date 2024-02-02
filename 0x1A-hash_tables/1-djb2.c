#include "hash_tables.h"

/**
 * hash_djb2 - Implements the djb2 algorithm for hashing.
 * @str: Pointer to a null-terminated byte string to be hashed.
 *
 * Return: The resulting hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash = 5381;
int com;
for (; *str != '\0'; str++)
{
com = *str;
hash = ((hash << 5) + hash) + com;
}
return (hash);
}
