#include "hash_tables.h"

/**
 * hash_table_t *hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;

	hash_t = malloc(sizeof(hash_table_t));

	if (hash_t == NULL)
		return (NULL);
	hash_t->size = size;
	return (hash_t);
}
