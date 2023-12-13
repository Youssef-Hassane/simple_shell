#include "../main.h"

/**
 * free_And_Assign_Null - Frees allocated memory and returns NULL
 * Return: NULL
 * --------------------------
 * Prototype: String free_And_Assign_Null(String AddressToFree);
 * --------------------------
 * @AddressToFree: The address to be freed and reassign Null
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

String free_And_Assign_Null(String AddressToFree)
{
	/* Free allocated memory */
	FREE_VARIABLE(AddressToFree);
	NULL_VARIABLE(AddressToFree);
	return (NULL);
}
