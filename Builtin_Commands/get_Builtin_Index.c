#include "../main.h"

/**
 * get_Builtin_Index - Get the index of a
 * command in the built-in commands array
 * Return: The index of the command in the built-in commands array
 * -------------------------------------
 * Returns the index of the specified command in the built-in commands array.
 * If the command is not found, returns NEGATIVE_ONE.
 * -------------------------------------
 * @theCommand: The command to find the index for.
 * -------------------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

Integer get_Builtin_Index(String theCommand)
{
	/* Index variable for traversing theBuiltInCommands array */
	ULI theIndex;
	ULI theSize;
	/* Array of built-in commands */
	String theBuiltInCommands[] = {"exit", "env",
						 "setenv", "unsetenv", "cd", "alias"};
	ZERO_VARIABLE(theIndex);
	theSize = sizeof(theBuiltInCommands) / sizeof(theBuiltInCommands[ZERO]);
	/* Iterate through the array to find the index of the specified command */
	while (theIndex < theSize)
	{
		/* If a match is found, return the index */
		if (strcmp(theCommand, theBuiltInCommands[theIndex]) == ZERO)
		{
			/* Return the index of the command */
			return (theIndex);
		}
		/* Otherwise, increase theIndex by 1 */
		INCREASE_BY_ONE(theIndex);
	}
	/* If the command is not found, return NEGATIVE_ONE */
	return (NEGATIVE_ONE);
}
