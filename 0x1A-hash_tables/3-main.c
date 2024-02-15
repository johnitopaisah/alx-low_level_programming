#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	hast_table_t *ht;

	ht = hast_table_create(1024);
	hash_table_set(ht, "betty", "holberton");
	return (EXIT_SUCCESS);
}
