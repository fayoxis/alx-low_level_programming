#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * from a hash table.
 * @ht: A pointer to the hash table.
 * @key: A pointer to the key to search for.
 *
 * Return: The value associated with the key, or
 * NULL if the key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index = 0;
hash_node_t *current_node;
while (ht == NULL || key == NULL)
return (NULL);
index = key_index((const unsigned char *)key, ht->size);
current_node = ht->array[index];
while (current_node != NULL)
{
if (strcmp(current_node->key, key) == 0)
return (current_node->value);
current_node = current_node->next;
}
return (NULL);
}
