#include "../main.h"

/**
 * execute_Child_Process - Execute the child process using execve
 * --------------------------
 * @theWholeCommand: Full path to the command
 * @theCommand: Array of command and arguments
 * --------------------------
 * Executes the child process using execve and handles cleanup on failure.
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

void execute_Child_Process(String theWholeCommand,
				   StringArray theCommand)
{
	/* Execute the child process using execve */
	if (execve(theWholeCommand, theCommand, environ) == NEGATIVE_ONE)
	{
		/* Free memory for full_cmd and command on execve failure */
		FREE_VARIABLE(theWholeCommand);
		free_The_Two_Dimensional_Array(theCommand);
	}
}
