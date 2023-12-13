#include "../../main.h"

/**
 * get_The_Environment_Variable - Get the value of
 * a specified environment variable
 * Return: The value of the environment variable if found, otherwise NULL
 * -------------------------------------
 * Prototype: String get_The_Environment_Variable(String variable);
 * -------------------------------------
 * @variable: The environment variable to retrieve
 * -------------------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

String get_The_Environment_Variable(String variable)
{
	/* String to store the value of the specified environment variable */
	String environmentValue;
	/* Integer index for traversing the environment variables array */
	Integer theIndex;
	/* Initialize the variable by ZERO */
	ZERO_VARIABLE(theIndex);
	/* Call the searchAndRetrieveEnvironmentVariableValue function */
	environmentValue =
	    search_And_Retrieve_Environment_Variable_Value(variable, &theIndex);
	/* Return the value of the specified environment variable */
	return (environmentValue);
}
