#include "../../main.h"

/**
 * terminate_Shell - Terminate the shell with optional exit status
 * -------------------------------------
 * Terminates the shell with an optional exit status.
 * -------------------------------------
 * @theGivenCommand: Array containing the user's input command.
 * @arguments: Array containing additional arguments.
 * @execution_status: Pointer to the execution status.
 * @theIndex: Index parameter.
 * -------------------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

void terminate_Shell(
	StringArray theGivenCommand, StringArray arguments,
	Integer *execution_status, Integer theIndex)
{
	/* Variable to store the result of handle_Exit_Input */
	Integer exit_result;
	/* Check if an exit status is provided as an argument */
	if (theGivenCommand[ONE])
	{
		/* Handle the exit input and get the result */
		exit_result = handle_Exit_Input(
			theGivenCommand, arguments, execution_status, theIndex);
		/* If there's an error in the exit input */
		/* return without further processing */
		if (exit_result != ZERO)
		{
			return;
		}
	}
	/* Free memory for theGivenCommand */
	free_The_Two_Dimensional_Array(theGivenCommand);
	/* Terminate the shell with the current execution status */
	exit(*execution_status);
}
