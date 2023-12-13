#include "../../main.h"


/**
 * search_In_Directories - Search for the command in directories
 * Return: The full path if found, otherwise NULL
 * -------------------------------------
 * Prototype: char *_search_in_directories(char *path_env, char *command);
 * -------------------------------------
 * @thePathOfEnvironment: The PATH environment variable
 * @theCommand: The command
 * -------------------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

String search_In_Directories(String thePathOfEnvironment, String theCommand)
{
	ULI theSize;
	/* String to hold the full command path */
	String theWholeCommand;
	/* String to hold the current directory in the iteration */
	String theDirectory;
	/* Structure to hold file status information */
	struct stat status;
	/* Tokenize the PATH environment variable using ':' as a delimiter */
	theDirectory = string_Tokenization(thePathOfEnvironment, THE_COLON);
	/* Iterate through each directory in the PATH */
	while (theDirectory)
	{
		theSize = (strlen(theDirectory) + strlen(theCommand) + TWO);
		/* Allocate memory for the whole command path */
		theWholeCommand = malloc(theSize);
		/* Check if memory allocation was successful */
		if (theWholeCommand)
		{
			/* Construct the full path by concatenating directory and command */
			strcpy(theWholeCommand, theDirectory);
			strcat(theWholeCommand, SLASH);
			strcat(theWholeCommand, theCommand);
			/* Check the status of the file using stat function */
			if (stat(theWholeCommand, &status) == ZERO)
			{
				/* Return the full command path if the file exists */
				return (theWholeCommand);
			}
			/* Free allocated memory if the file does not exist */
			FREE_VARIABLE(theWholeCommand);
			NULL_VARIABLE(theWholeCommand);
			/* Move to the next directory in the PATH */
			theDirectory = string_Tokenization(theNull, THE_COLON);
		}
	}
	/* Return NULL if the command is not found in any directory */
	return (theNull);
	/* #0002 */
}
