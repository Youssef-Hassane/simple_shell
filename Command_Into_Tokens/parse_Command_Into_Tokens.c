#include "../main.h"

/**
 * parse_Command_Into_Tokens - Parses a command into tokens
 * Return: An array of tokens
 * --------------------------
 * Prototype: StringArray parse_Command_Into_Tokens(String theBuffer);
 * --------------------------
 * @theBuffer: The command to be parsed
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

StringArray parse_Command_Into_Tokens(String theBuffer)
{
	String theToken;					   /* Variable to hold each token during tokenization */
	String temporaryVariableThatHasCopyOfBuffer;
	StringArray oneOfTheTokens;			   /* Array to store the parsed tokens */
	Integer counter;					   /* Counter for the number of tokens */
	Integer theIndex;					   /* Index used during tokenization */
	ULI oneOfTheTokensSize;				   /* Size of the oneOfTheTokens array */
	/* Initialize variables with NULL and ZERO */
	NULL_VARIABLE(theToken); /* By NULL */
	NULL_VARIABLE(temporaryVariableThatHasCopyOfBuffer); /* By NULL */
	NULL_VARIABLE(oneOfTheTokens); /* By NULL*/
	ZERO_VARIABLE(counter); /* By ZERO*/
	ZERO_VARIABLE(theIndex); /* By ZERO*/
	if (!theBuffer) /* Check if theBuffer is NULL */
		return (theNull);
	/* Create a copy of theBuffer */
	temporaryVariableThatHasCopyOfBuffer = strdup(theBuffer);
	theToken = /* Tokenize the copy of theBuffer */
	string_Tokenization(temporaryVariableThatHasCopyOfBuffer, THE_DELIMITERS);
	if (!theToken) /* Check if no tokens are found */
	{	free_And_Assign_Null(theBuffer);
		free_And_Assign_Null(temporaryVariableThatHasCopyOfBuffer);
		return (theNull);
	}
	counter = iterate_And_Count_Tokens(theToken); /* Count the number of tokens */
	free_And_Assign_Null(temporaryVariableThatHasCopyOfBuffer);
	/* Allocate memory for the oneOfTheTokens array */
	oneOfTheTokensSize = sizeof(char *) * (counter + ONE);
	oneOfTheTokens = malloc(oneOfTheTokensSize);
	if (!oneOfTheTokens)
	{	free_And_Assign_Null(theBuffer);
		return (theNull);
	}
	/*Tokenize the original Buffer and store tokens in the oneOfTheTokens array*/
	theToken = string_Tokenization(theBuffer, THE_DELIMITERS);
	for (; theToken; INCREASE_BY_ONE(theIndex))
	{	oneOfTheTokens[theIndex] = strdup(theToken);
		theToken = string_Tokenization(theNull, THE_DELIMITERS);
	} free_And_Assign_Null(theBuffer); /* Free the original theBuffer */
	oneOfTheTokens[theIndex] = theNull; /* Set the last element to NULL */
	return (oneOfTheTokens);
}
