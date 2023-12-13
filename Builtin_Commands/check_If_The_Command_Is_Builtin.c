#include "../main.h"

/**
 * check_If_The_Command_Is_Builtin - Checks if the command
 * is a built-in command
 * Return: 1 if the command is built-in, 0 otherwise
 * -------------------------------------
 * Prototype: Integer check_If_The_Command_Is_Builtin(String user_input);
 * -------------------------------------
 * @user_input: The command to be checked
 * -------------------------------------
 * By [Author Name]
 */

Integer check_If_The_Command_Is_Builtin(String user_input)
{
	/* Index variable for traversing theBuiltInCommands array */
	Integer theIndex;
	/* Array of built-in commands */
	String theBuiltInCommands[] = {"exit", "env",
	"setenv", "cd", "unsetenv", "alias", theNull};
	/* Initialize theIndex to zero */
	ZERO_VARIABLE(theIndex);
	/* Iterate through each built-in command in the array */
	while (theBuiltInCommands[theIndex] != theNull)
	{
		/* Check if user_input matches the current built-in command */
		if (strcmp(user_input, theBuiltInCommands[theIndex]) == ZERO)
		{
			/* Return 1 if the command is built-in */
			return (ONE);
		}
		/* Move to the next built-in command in the array */
		INCREASE_BY_ONE(theIndex);
	}
	/* Return 0 if the command is not a built-in command */
	return (ZERO);
}
