#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int s;
	hash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (s = 0; s < ht->size; s++)
	{
		while (ht->array[s] != NULL)
		{
			next = ht->array[s]->next;
			free(ht->array[s]->key);
			free(ht->array[s]->value);
			free(ht->array[s]);
			ht->array[s] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
