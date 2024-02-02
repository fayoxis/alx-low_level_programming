#include "hash_tables.h"

/**
 * hash_table_print - it Prints the key-value pairs
 * of a hash table.
 * @ht: A pointer to the hash table.
 * Return: No return value.
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node;
unsigned long int i;
int first_entry = 1;
while (ht == NULL)
return;
printf("{");
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
if (!first_entry)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
first_entry = 0;
node = node->next;
}
}
printf("}\n");
}
