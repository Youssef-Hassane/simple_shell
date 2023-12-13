#include "../main.h"

/**
 * get_The_Input_From_The_User - Reads a line from the standard input
 * Return: The line read
 * --------------------------
 * Prototype: char *read_line(void);
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

String get_The_Input_From_The_User(void)
{
	/* Allocate buffer to store user input */
	String theBuffer;		/* Buffer to store user input */
	ULI theSizeOfTheBuffer; /* Size of the buffer */
	/* Return value from getline function */
	LI theReturnValueFromTheGetInputFunction;

	NULL_VARIABLE(theBuffer);	     /* Initialize by NULL */
	ZERO_VARIABLE(theSizeOfTheBuffer); /* Initialize by ZERO */

	/* Check if input is from a terminal and print shell prompt if true */
	is_It_A_Terminal(STDIN_FILENO)
	    ? (write(STDOUT_FILENO, START_SHELL, NINE), (void)0)
	    : (void)0;

	/* Read user input using get input function */
	theReturnValueFromTheGetInputFunction =
	    read_Line(&theBuffer, /* Pointer to the buffer */
			  &theSizeOfTheBuffer, /* Pointer to the size of the buffer */
			  theStandardInput); /* Pointer to the input stream */

	if (theReturnValueFromTheGetInputFunction == NEGATIVE_ONE)
	{
		/* Handle error if get input fails */
		return (free_And_Return_Null(theBuffer));
	}
	/* Return the buffer */
	return (theBuffer);
}
