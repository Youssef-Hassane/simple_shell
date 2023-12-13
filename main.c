#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 * Description: prints the name of the program
 * --------------------------
 * Prototype: int main(int argc, char *argv[]);
 * --------------------------
 * @argumentCounter: The number of arguments
 * @argumentVector: The array of arguments
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

Integer main(Integer argumentCounter, StringArray argumentVector)
{
	String theBuffer;		     /* Buffer to store the input from the user */
	StringArray theGivenCommand; /* Array to store the parsed tokens */
	Integer theCondition;	     /* Condition to store the exit status */
	Integer theIndex;		     /* Index to store the number of tokens */
	/* Initialize variables with NULL and ZERO */
	NULL_VARIABLE(theBuffer);	  /* By NULL */
	NULL_VARIABLE(theGivenCommand); /* By NULL */
	ZERO_VARIABLE(theCondition);	  /* By ZERO */
	ZERO_VARIABLE(theIndex);	  /* By ZERO */
	/* Ignore the command line arguments */
	unused(argumentCounter);
	/* Infinite loop for continuous user input and command execution */
	while (INFINITY_LOOP)
	{
		/* Read input from the user */
		theBuffer = get_The_Input_From_The_User();
		/* Check if the buffer is empty */
		if (!theBuffer)
		{
			/* If the buffer is empty, check if it's a */
			/* terminal and return 0 or the condition */
			return (is_It_A_Terminal(STDIN_FILENO)
				  ? write(STDOUT_FILENO, NEW_LINE, ONE),
				  ZERO : theCondition);
		}
		
	}
}
