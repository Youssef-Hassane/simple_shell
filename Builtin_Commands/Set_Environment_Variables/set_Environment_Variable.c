#include "../../main.h"

/**
 * set_Environment_Variable - Set or modify an environment variable
 * Return: 0 on success, -1 on failure
 * --------------------------
 * Prototype: Integer set_Environment_Variable(String variable, String value);
 * --------------------------
 * @variable: The environment variable to set or modify
 * @value: The value to set for the environment variable
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

Integer set_Environment_Variable(String variable, String value)
{
	/* Use the setenv function to set or modify the environment variable */
	if (setenv(variable, value, ONE) == NEGATIVE_ONE)
	{
		/* Return -1 on failure */
		return (NEGATIVE_ONE);
	}
	/* Return 0 on success */
	return (ZERO);
}
