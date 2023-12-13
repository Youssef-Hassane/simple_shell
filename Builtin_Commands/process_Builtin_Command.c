#include "../main.h"

/**
 * process_Builtin_Command - Process built-in shell commands
 * -------------------------------------
 * Executes the appropriate action based on the user's input command.
 * -------------------------------------
 * @theGivenCommand: Array containing the user's input command.
 * @arguments: Array containing additional arguments.
 * @execution_status: Pointer to the execution status.
 * @index: Index parameter (not used in the provided code).
 * -------------------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

void process_Builtin_Command(StringArray theGivenCommand,
				     StringArray arguments, Integer *execution_status, Integer index)
{
	/* Determine the index of the user's command in the built-in commands array */
	switch (get_Builtin_Index(theGivenCommand[ZERO]))
	{
	case ZERO:
		/* If the command is "exit", execute the terminate_shell function */
		terminate_Shell(theGivenCommand, arguments, execution_status, index);
		break;
	case ONE:
		/* If the command is "env", execute the display_Environment function */
		display_Environment(theGivenCommand, execution_status);
		break;
	case TWO:
		/* If the command is "setenv", execute the handle_Setenv_Input function */
		handle_Setenv_Input(theGivenCommand, arguments, execution_status, index);
		break;
	case THREE:
		/* If the command is "unsetenv" execute the handle_Unsetenv_Input function */
		handle_Unsetenv_Input(theGivenCommand, arguments, execution_status, index);
		break;
	case FOUR:
		/* Change Directory (couldn't do it / It's too F* hard) */
		break;
	case FIVE:
		/* Alias (couldn't do it / It's too F* hard) */
		break;
	}
}
