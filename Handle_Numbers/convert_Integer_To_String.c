#include "../main.h"

/**
 * convert_Integer_To_String - Convert an integer to a string
 * Return: a dynamically allocated string representing the integer.
 * -------------------------------------
 * Converts an integer to a string representation.
 * -------------------------------------
 * @number: The integer to be converted
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

String convert_Integer_To_String(Integer number)
{ /* Buffer to store the string representation of the integer */
	char theBuffer[theBufferSize];
	Integer theIndex; /* Index variable for traversing theBuffer array */
	/* Initialize theIndex to zero */
	ZERO_VARIABLE(theIndex);
	if (number == ZERO) /* Check if the number is zero */
	{			  /* If zero, directly assign '0' to theBuffer */
		theBuffer[INCREASE_BY_ONE(theIndex)] = ZERO_STRING;
	}
	else
	{ /* Variables for reversing the string in-place */
		int theStartPoint;
		int theEndPoint;
		/* Loop until the number becomes zero */
		while (number > ZERO)
		{
			/* Convert the last digit of the number */
			/* to a character and store in theBuffer */
			theBuffer[INCREASE_BY_ONE(theIndex)] = (number % TEN) + ZERO_STRING;
			number /= TEN; /* Reduce the number by removing the last digit */
		}
		/* Reverse the string in-place */
		ZERO_VARIABLE(theStartPoint);
		theEndPoint = theIndex - ONE;
		while (theStartPoint < theEndPoint)
		{
			/* Swap characters at theStartPoint and theEndPoint */
			char temp = theBuffer[theStartPoint];

			theBuffer[theStartPoint] = theBuffer[theEndPoint];
			theBuffer[theEndPoint] = temp;
			/* Move to the next pair of characters */
			INCREASE_BY_ONE(theStartPoint);
			DECREASE_BY_ONE(theEndPoint);
		}
	}
	/* Add the null terminator to the end of the string */
	theBuffer[theIndex] = THE_NULL_TERMINATOR;
	/* Return a dynamically allocated copy of theBuffer */
	return (strdup(theBuffer));
}
