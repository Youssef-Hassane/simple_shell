#include "../main.h"

/**
 * execute_Command - Executes the command
 * Return: the exit status
 * --------------------------
 * @theGivenCommand: Array of command and arguments
 * @argumentVector: Array of arguments
 * @theCondition: Condition indicating the exit status
 * @theIndex: Index indicating the command position
 * --------------------------
 * Prototype: void execute_Command(StringArray theGivenCommand,
 * StringArray argumentVector, Integer *theCondition, Integer theIndex);
 * --------------------------
 * Executes the command in a child process
 * handles errors, and returns the exit status.
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

void execute_Command(StringArray theGivenCommand,
StringArray argumentVector, Integer *theCondition, Integer theIndex)
{
	/* Check if the command is a built-in command */
	switch (check_If_The_Command_Is_Builtin(theGivenCommand[0]))
	{
	/* If it's a built-in command */
	case ONE:
		/* Process the built-in command */
		process_Builtin_Command(theGivenCommand, argumentVector,
		theCondition, theIndex);
		break;
	/* If it's not a built-in command */
	case ZERO:
		/* Execute the given command */
		*theCondition = execute_The_Given_Command(theGivenCommand,
		argumentVector, theIndex);
		break;
	}
}
