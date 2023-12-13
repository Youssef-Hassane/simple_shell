#include "../../main.h"

/**
 * get_The_Path_Of_Command - Gets the path of a command
 * Return: The path of the command if found, otherwise NULL
 * -------------------------------------
 * Prototype: String get_The_Path_Of_Command(String theCommand);
 * -------------------------------------
 * @theCommand: The command to get the path
 * -------------------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

String get_The_Path_Of_Command(String theCommand)
{
	/* Declare variables */
	String thePathOfEnvironment; /* The PATH environment variable */
	String theWholeCommand;	     /* The whole command */
	String theAbsolutePath;	     /* The absolute path */
	/* Initialize variables */
	NULL_VARIABLE(thePathOfEnvironment); /* By NULL */
	NULL_VARIABLE(theWholeCommand);	 /* By NULL */
	NULL_VARIABLE(theAbsolutePath);	 /* By NULL */
	/* Check if the command is an absolute path */
	theAbsolutePath = is_It_Absolute_Path(theCommand);
	/* If the command is an absolute path, return it */
	if (theAbsolutePath != theNull)
	{
		return (theAbsolutePath);
	}
	/* Getting the PATH environment variable */
	thePathOfEnvironment = get_The_Environment_Variable(THE_PATH);
	/* If the PATH environment variable is NULL, return NULL */
	if (!thePathOfEnvironment)
	{
		return (theNull);
	}
	/* searching in directories */
	theWholeCommand = search_In_Directories(thePathOfEnvironment, theCommand);
	/* Free the PATH environment variable */
	FREE_VARIABLE(thePathOfEnvironment);
	/* Return the whole command */
	return (theWholeCommand);
}
