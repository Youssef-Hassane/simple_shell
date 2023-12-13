#include "../main.h"

/**
 * read_Line - Reads a line from the standard input
 * Return: The line read
 * --------------------------
 * Prototype: ULI read_Line(StringArray pointerToBuffer,
 * ULI *theLengthOfBuffer, FILE *theStream)
 * --------------------------
 * @pointerToBuffer: A pointer to the buffer where the line will be stored.
 * @theLengthOfBuffer: A pointer to the length of the buffer.
 * @theStream: The input stream (e.g., stdin).
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 *
 */
ULI read_Line(StringArray pointerToBuffer,
	ULI *theLengthOfBuffer, FILE *theStream)
{
	ULI theBufferSize2;
	LI theBytesRead;
	Integer character;
	/* Set default values */
	ZERO_VARIABLE(theBufferSize2); /* By ZERO */
	ZERO_VARIABLE(theBytesRead);	 /* By ZERO */
	if (pointerToBuffer == theNull || theLengthOfBuffer == theNull)
	{
		return (NEGATIVE_ONE);	     /* Invalid arguments */
	}					     /* Set default values */
	NULL_VARIABLE(*pointerToBuffer);   /* By NULL */
	ZERO_VARIABLE(*theLengthOfBuffer); /* By ZERO */
	while ((character = fgetc(theStream)) != NEGATIVE_ONE)
	{ /* Read characters until newline or end of file */
		if ((ULI)theBufferSize2 == (ULI)theBytesRead)
		{ /* Resize the buffer */
			theBufferSize2 += 1024;
			*pointerToBuffer = realloc(*pointerToBuffer, theBufferSize2);
			if (*pointerToBuffer == theNull)
			{ /* Memory allocation failure */
				return (NEGATIVE_ONE);
			} /* Update theLengthOfBuffer variable to reflect the new buffer size */
			*theLengthOfBuffer = theBufferSize2;
		} /* Store the character in the buffer */
		(*pointerToBuffer)[INCREASE_BY_ONE(theBytesRead)] = (char)character;
		if (character == THE_NULL_CHARACTER)
		{
			/* End of line */
			(*pointerToBuffer)[theBytesRead] = THE_NULL_TERMINATOR;
			return (theBytesRead - ONE); /* Exclude the newline character */
		}
	}
	if (theBytesRead > ZERO)
	{ /* End of file, but there's content in the buffer */
		(*pointerToBuffer)[theBytesRead] = THE_NULL_TERMINATOR;
		return (theBytesRead - ONE); /* Exclude the newline character */
	}
	return (NEGATIVE_ONE); /* No characters read */
}
