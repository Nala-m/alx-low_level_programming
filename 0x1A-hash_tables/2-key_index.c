#include "hash_tables.h"

/**
 * key_index - gives the index of a key according to a given hash
 * @key: key passed
 * @size: size of the hash tables
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
