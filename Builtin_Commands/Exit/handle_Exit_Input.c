#include "../../main.h"

/**
 * handle_Exit_Input - Handle the exit command with optional exit status
 * Return: 1 if there's an error in the exit input, 0 otherwise.
 * -------------------------------------
 * Handles the exit command with an optional exit status.
 * -------------------------------------
 * @theGivenCommand: Array containing the user's input command.
 * @arguments: Array containing additional arguments.
 * @execution_status: Pointer to the execution status.
 * @theIndex: Index parameter.
 * -------------------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

Integer handle_Exit_Input(
	StringArray theGivenCommand, StringArray arguments,
	Integer *execution_status, Integer theIndex)
{
	/* Initialize exit_value with the current execution status */
	Integer exit_value = *execution_status;

	/* Check if an exit status is provided as an argument */
	if (theGivenCommand[ONE])
	{
		/* Check if the provided argument is a positive number */
		if (!the_Given_Input_Is_Positive_Or_Not(theGivenCommand[ONE]))
		{
			/* Write an error message and update the execution status */
			write_Error_Message(arguments, theIndex,
			ERROR_MESSAGE_1, theGivenCommand[ONE]);
			free_The_Two_Dimensional_Array(theGivenCommand);
			*execution_status = TWO;
			/* Return 1 to indicate an error */
			return (ONE);
		}
		/* Convert the exit status argument to an integer */
		exit_value = atoi(theGivenCommand[ONE]);
	}
	/* Free memory for theGivenCommand */
	free_The_Two_Dimensional_Array(theGivenCommand);
	/* Terminate the shell with the specified exit status */
	exit(exit_value);
	/* This line won't be reached, included for completeness */
	return (ZERO);
}
