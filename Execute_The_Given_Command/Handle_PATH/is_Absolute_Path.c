#include "../../main.h"

/**
 * is_It_Absolute_Path - Checks if the command is an absolute path
 * Return: The absolute path if it is, otherwise NULL
 * -------------------------------------
 * Prototype: String is_It_Absolute_Path(String theCommand)
 * -------------------------------------
 * @theCommand: The command
 * -------------------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

String is_It_Absolute_Path(String theCommand)
{
	/* Index to traverse theCommand string */
	Integer theIndex;
	/* Structure to hold file status information */
	struct stat theStatus;
	/* Initialize the variable by ZERO */
	ZERO_VARIABLE(theIndex);
	/* Iterate through theCommand characters */
	while (theCommand[theIndex])
	{
		/* Check if the first character is a backslash */
		if (theCommand[theIndex] == '/')
		{
			/* Check the status of the file using stat function */
			if (stat(theCommand, &theStatus) == ZERO)
			{
				/* Return a duplicate of theCommand if it is an absolute path */
				return (strdup(theCommand));
			}
			/* Return NULL if stat function fails (not an absolute path) */
			return (theNull);
		}
		/* Move to the next character in theCommand string */
		INCREASE_BY_ONE(theIndex);
	}
	/* Return NULL if no absolute path is found in theCommand */
	return (theNull);
	/* #0002 */
}
