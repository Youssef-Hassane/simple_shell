#include "../main.h"

/**
 * execute_The_Given_Command - Execute the command in a child process
 * Return: the exit status
 * --------------------------
 * @theCommand: Array of command and arguments
 * @argumentVector: Array of arguments
 * @theIndex: Index indicating the command position
 * --------------------------
 * Executes the command in a child process
 * handles errors, and returns the exit status.
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

Integer execute_The_Given_Command(
	StringArray theCommand, StringArray argumentVector, Integer theIndex)
{
	/* Variables to store the whole command */
	/* path, child process ID, and exit status */
	String theWholeCommand;
	pid_t theChildProcessID;
	Integer theCondition;

	/* Get the whole command path */
	theWholeCommand = get_The_Path_Of_Command(theCommand[ZERO]);

	/* Check if the command path is obtained successfully */
	if (!theWholeCommand)
	{
		/* Handle execution error and return an error code */
		return (handle_Execution_Error(argumentVector, theCommand, theIndex));
	}

	/* Fork a child process */
	theChildProcessID = fork();

	/* Check if it's the child process or the parent process */
	(theChildProcessID == ZERO)
	    ? execute_Child_Process(theWholeCommand, theCommand)
	    : cleanup_After_Execution(theChildProcessID,
						&theCondition, theCommand, theWholeCommand);

	/* Return the exit status of the child process */
	return (get_Exit_Status(theCondition));
}
