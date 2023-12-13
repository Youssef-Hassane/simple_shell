#include "../../main.h"

/**
 * searchAndRetrieveEnvironmentVariableValue - Search for a
 * specified environment variable
 * and retrieve its value
 * Return: The value of the environment variable if found, otherwise NULL
 * -------------------------------------
 * Prototype: String
 * searchAndRetrieveEnvironmentVariableValue(String variable, Integer *index);
 * -------------------------------------
 * @variable: The environment variable to search for
 * @index: Pointer to an integer to store the
 * current index for subsequent calls
 * -------------------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

String
search_And_Retrieve_Environment_Variable_Value(String variable, Integer *index)
{
	/* String to store a copy of the current */
	/* environment variable during each iteration */
	String currentEnvironmentVariableCopy;
	/* String to store the key token (variable name) */
	String theKeyToken;
	/* String to store the value token (variable value) */
	String theValueToken;
	/* String to store the value of the specified environment variable */
	String environmentValue;
	/* Iterate through each environment variable */
	while (environ[*index])
	{
		/* Duplicate the current environment variable for manipulation */
		currentEnvironmentVariableCopy = strdup(environ[*index]);
		/* Tokenize the key (variable name) from the current environment variable */
		theKeyToken =
		string_Tokenization(currentEnvironmentVariableCopy, EQUAL_SIGN);
		/* Check if the key token matches the specified environment variable */
		if (strcmp(theKeyToken, variable) == ZERO)
		{
			/* Tokenize and retrieve the value token (variable value) */
			theValueToken = string_Tokenization(theNull, NEW_LINE);
			/* Duplicate the value token to store the environment variable value */
			environmentValue = strdup(theValueToken);
			/* Free the memory allocated for the duplicated environment variable */
			FREE_VARIABLE(currentEnvironmentVariableCopy);
			/* Move to the next environment variable in */
			/* the array for subsequent calls */
			(*index)++;
			/* Return the value of the specified environment variable */
			return (environmentValue);
		}
		/* Free the memory allocated for the duplicated environment variable */
		FREE_VARIABLE(currentEnvironmentVariableCopy);
		/* Move to the next environment variable in the array */
		(*index)++;
	}

	/* Return NULL if the specified environment variable is not found */
	return (theNull);
}
