#include "../../main.h"

/**
 * write_Error_Message - Write an error message to standard error
 * --------------------------
 * Writes an error message to standard error output.
 * --------------------------
 * @arguments: Array containing the user's input command.
 * @theIndex: Index parameter.
 * @error_message: Error message to be written.
 * @extra_message: Additional message to be appended.
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

void write_Error_Message(
	StringArray arguments, Integer theIndex,
	const String error_message, const String extra_message)
{
	/* Convert index to string for writing */
	String index_str = convert_Integer_To_String(theIndex);
	/* Write error message components to standard error */
	write_Function_Standard_Error(arguments[ZERO], strlen(arguments[ZERO]));
	write_Function_Standard_Error(COLON_WHITESPACE, TWO);
	write_Function_Standard_Error(index_str, strlen(index_str));
	write_Function_Standard_Error(error_message, strlen(error_message));
	write_Function_Standard_Error(extra_message, strlen(extra_message));
	/* Add a newline if extra_message doesn't end with newline */
	if (extra_message[strlen(extra_message) - ONE] != THE_NULL_CHARACTER)
	{
		write_Function_Standard_Error(NEW_LINE, ONE);
	}
	/* Free dynamically allocated memory */
	FREE_VARIABLE(index_str);
}
