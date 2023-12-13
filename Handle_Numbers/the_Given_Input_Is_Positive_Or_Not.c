#include "../main.h"

/**
 * the_Given_Number_Is_Positive_Or_Not - Checks if a string
 * is a positive number
 * Return: 1 if the string is a positive number, 0 otherwise
 * -------------------------------------
 * Prototype: int the_Given_Number_Is_Positive_Or_Not(char *str)
 * -------------------------------------
 * @theString: The string to be checked
 * -------------------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

Integer the_Given_Input_Is_Positive_Or_Not(String theString)
{
	/* Index variable for traversing theString */
	Integer theIndex;
	/* Initialize theIndex to zero */
	ZERO_VARIABLE(theIndex);
	/* Check if theString is NULL */
	if (!theString)
	{
		/* Return 0 if theString is NULL */
		return (ZERO);
	}
	/* Iterate through each character in theString */
	while (theString[theIndex])
	{
		/* Check if the current character is not a digit (0-9) */
		if (theString[theIndex] < '0' || theString[theIndex] > '9')
		{
			/* Return 0 if theString contains non-digit characters */
			return (ZERO);
		}
		/* Move to the next character in theString */
		INCREASE_BY_ONE(theIndex);
	}
	/* Return 1 if all characters in theString are digits (0-9) */
	return (ONE);
}
