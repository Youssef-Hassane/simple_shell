#include "../main.h"

/**
 * display_Error_Message - Display an error message
 * --------------------------
 * Displays an error message to the standard error output.
 * The error message includes the program name
 * command, index, and a predefined error message.
 * --------------------------
 * @program_name: The name of the program.
 * @command: The command causing the error.
 * @theIndex: Index parameter.
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

void display_Error_Message(
	String program_name, String command, Integer theIndex)
{
	/* String to store the string representation of the index */
	String index_str;
	/* Convert the index to a string */
	index_str = convert_Integer_To_String(theIndex);
	/* Write the error message components to standard error */
	write_Function_Standard_Error(program_name, strlen(program_name));
	write_Function_Standard_Error(COLON_WHITESPACE, TWO);
	write_Function_Standard_Error(index_str, strlen(index_str));
	write_Function_Standard_Error(COLON_WHITESPACE, TWO);
	write_Function_Standard_Error(command, strlen(command));
	write_Function_Standard_Error(ERROR_MESSAGE_2, strlen(ERROR_MESSAGE_2));
	/* Free dynamically allocated memory */
	FREE_VARIABLE(index_str);
}
