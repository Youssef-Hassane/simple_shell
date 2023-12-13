#include "../../main.h"

/**
 * unset_Environment_Variable - Unset or remove an environment variable
 * Return: 0 on success, -1 on failure
 * --------------------------
 * Prototype: Integer unset_Environment_Variable(String variable);
 * --------------------------
 * @variable: The environment variable to unset or remove
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

Integer unset_Environment_Variable(String variable)
{
	/* Use the unsetenv function to unset or remove the environment variable */
	if (unsetenv(variable) == NEGATIVE_ONE)
	{
		/* Return -1 on failure */
		return (NEGATIVE_ONE);
	}
	/* Return 0 on success */
	return (ZERO);
}
