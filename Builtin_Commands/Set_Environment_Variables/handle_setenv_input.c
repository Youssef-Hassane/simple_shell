#include "../../main.h"

/**
 * handle_Setenv_Input - Handle the setenv built-in command
 * Return: 1 if there's an error in the setenv input, 0 otherwise
 * -------------------------------------
 * Prototype: Integer handle_Setenv_Input(
 * StringArray theGivenCommand,
 * StringArray arguments,
 * Integer *execution_status,
 * Integer theIndex
 * );
 * -------------------------------------
 * Handles the setenv command and modifies the environment variable
 * -------------------------------------
 * @theGivenCommand: Array containing the user's input command
 * @arguments: Array containing additional arguments
 * @execution_status: Pointer to the execution status
 * @theIndex: Index parameter
 * -------------------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

Integer handle_Setenv_Input(
	StringArray theGivenCommand,
	StringArray arguments,
	Integer *execution_status,
	Integer theIndex)
{
	/* Check if the correct number of arguments is provided */
	if ((theGivenCommand[ONE] == theNull) || (theGivenCommand[TWO] == theNull)
							|| (theGivenCommand[THREE] != theNull))
	{
		/* Print an error message and update the execution status */
		write_Error_Message(arguments, theIndex,
					  ERROR_MESSAGE_3, theGivenCommand[0]);
		/* Free memory for theGivenCommand */
		free_The_Two_Dimensional_Array(theGivenCommand);
		/* Set execution status to 2 (error) */
		*execution_status = TWO;
		/* Return 1 to indicate an error */
		return (ONE);
	}
	/* Call the set_Environment_Variable function */
	if (set_Environment_Variable(theGivenCommand[ONE],
		theGivenCommand[TWO]) == NEGATIVE_ONE)
	{
		/* Set execution status to 2 (error) */
		*execution_status = TWO;
		/* Return 1 to indicate an error */
		return (ONE);
	}
	/* Free memory for theGivenCommand */
	free_The_Two_Dimensional_Array(theGivenCommand);
	/* Return 0 on success */
	return (ZERO);
}
