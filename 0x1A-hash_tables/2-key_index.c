#include "hash_tables.h"

/**
 * key_index - Returns the index of a key in a hash table array.
 * @key: Pointer to the key.
 * @size: Size of the hash table array.
 *
 * This function uses the hash_djb2 function to calculate the index.
 * Return: Index at which the key/value pair should be
 * stored in the hash table array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}
