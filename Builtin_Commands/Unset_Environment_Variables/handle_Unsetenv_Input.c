#include "../../main.h"

/**
 * handle_unsetenv_input - Handle the unsetenv built-in command
 * Return: 1 if there's an error in the unsetenv input 0 otherwise
 * --------------------------
 * Handles the unsetenv command and removes the environment variable
 * --------------------------
 * Prototype: Integer handle_unsetenv_input(
 * StringArray theGivenCommand,
 * StringArray arguments,
 * Integer *execution_status,
 * Integer theIndex
 * );
 * --------------------------
 * @theGivenCommand: Array containing the user's input command
 * @arguments: Array containing additional arguments
 * @execution_status: Pointer to the execution status
 * @theIndex: Index parameter
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

Integer handle_Unsetenv_Input(
	StringArray theGivenCommand,
	StringArray arguments,
	Integer *execution_status,
	Integer theIndex)
{
	/* Check if the correct number of arguments is provided */
	if ((theGivenCommand[ONE] == theNull) || (theGivenCommand[TWO] != theNull))
	{
		/* Print an error message and update the execution status */
		write_Error_Message(arguments, theIndex,
		ERROR_MESSAGE_4, theGivenCommand[ZERO]);
		/* Free memory for theGivenCommand */
		free_The_Two_Dimensional_Array(theGivenCommand);
		/* Set execution status to 2 (error) */
		*execution_status = TWO;
		/* Return 1 to indicate an error */
		return (ONE);
	}
	/* Call the unset_Environment_Variable function */
	if (unset_Environment_Variable(theGivenCommand[ONE]) == NEGATIVE_ONE)
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
