#include "../main.h"

/**
 * cleanup_After_Execution - Cleanup after the execution of the child process
 * --------------------------
 * @theChildProcessID: Process ID of the child process
 * @theCondition: Exit status of the child process
 * @theCommand: Array of command and arguments
 * @theWholeCommand: Full path to the command
 * --------------------------
 * Waits for the child process to complete
 * frees memory and sets full_cmd to NULL.
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

void cleanup_After_Execution(pid_t theChildProcessID,
				     Integer *theCondition, StringArray theCommand, String theWholeCommand)
{
	/* Wait for the child process to complete */
	waitpid(theChildProcessID, theCondition, ZERO);

	/* Free memory for command and set full_cmd to NULL */
	free_The_Two_Dimensional_Array(theCommand);
	FREE_VARIABLE(theWholeCommand);
	theWholeCommand = theNull;

}
