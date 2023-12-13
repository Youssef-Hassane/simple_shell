#include "../main.h"

/**
 * handle_Execution_Error - Handle execution error and cleanup
 * Return: 127
 * -------------------------------------
 * @argumentVector: Array of arguments
 * @theCommand: Array of command and arguments
 * @theIndex: Index indicating the command position
 * -------------------------------------
 * Prints an error message, frees memory
 * for command, and returns an error code.
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

Integer handle_Execution_Error(StringArray argumentVector,
					 StringArray theCommand, Integer theIndex)
{
	/* Print an error message */
	display_Error_Message(argumentVector[ZERO], theCommand[ZERO], theIndex);

	/* Free memory for command */
	free_The_Two_Dimensional_Array(theCommand);

	/* Return an error code */
	return (127);
}
