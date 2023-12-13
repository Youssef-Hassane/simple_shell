#include "../../main.h"

/**
 * display_Environment - Display the current environment
 * -------------------------------------
 * Prints the current environment to the standard output.
 * -------------------------------------
 * @theGivenCommand: Array containing the user's input
 * command (not used in this function).
 * @execution_status: Pointer to the execution status (updated to zero).
 * -------------------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

void display_Environment(
	StringArray theGivenCommand, Integer *execution_status)
{
	/* Index variable for traversing the environment variables array */
	Integer theIndex;
	/* Initialize theIndex to zero */
	ZERO_VARIABLE(theIndex);
	/* Iterate through each environment variable */
	/* and print it to the standard output */
	while (environ[theIndex])
	{
		/* Write the environment variable to the standard output */
		write_Function_Standard_Output(
			environ[theIndex], strlen(environ[theIndex]));
		/* Write a newline character to separate environment variables */
		write_Function_Standard_Output(NEW_LINE, ONE);
		/* Move to the next environment variable in the array */
		INCREASE_BY_ONE(theIndex);
	}
	/* Free memory allocated for theGivenCommand (not used in this function) */
	free_The_Two_Dimensional_Array(theGivenCommand);
	/* Set the execution status to zero */
	ZERO_VARIABLE((*execution_status));
}
