#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and frees the memory.
 * @ht: Pointer to the hash table to be deleted.
 *
 * Return: None.
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *current = NULL;
unsigned long int i = 0;
if (ht == NULL)
return;
while (i < ht->size)
{
if (ht->array[i] != NULL)
{
while (ht->array[i])
{
current = ht->array[i];
free(current->key);
free(current->value);
ht->array[i] = ht->array[i]->next;
free(current);
}
}

i++;
}
free(ht->array);
free(ht);
}
