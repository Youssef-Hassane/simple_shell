#include "../main.h"

/**
 * free_And_Return_Null - Frees allocated memory and returns NULL
 * Return: NULL
 * --------------------------
 * Prototype: String free_And_Return_Null(String theBuffer);
 * --------------------------
 * @theBuffer: The buffer to be freed
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

String free_And_Return_Null(String theBuffer)
{
	/* Free allocated memory */
	FREE_VARIABLE(theBuffer);
	/* Return NULL */
	return (theNull);
}
