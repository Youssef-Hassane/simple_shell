#include "../main.h"

/**
 * string_Tokenization - A function that breaks a string into tokens
 * Return: A pointer to the found token or NULL if no token is found
 * --------------------------
 * Prototype: String string_Tokenization(String theString,
 * String theDelimiters);
 * --------------------------
 * @theString: The string to be tokenized
 * @theDelimiters: A string containing delimiter characters
 * --------------------------
 * strspn calculates the length of the segment
 * with characters from a specified set
 * strcspn calculates the length of the segment
 * with characters not in a specified set
 * --------------------------
 * By Youssef Hassane
 */


String string_Tokenization(String theString, String theDelimiters)
{
	/* Keeps track of the last token */
	static char *theLastToken;
	/* Pointer to the current token */
	char *theCurrentToken;
	/* If 'theString' is not NULL, update theLastToken */
	theLastToken = (theString != theNull) ? theString : theLastToken;
	/* If theLastToken is NULL or pointing to */
	/* the end of the string, return NULL */
	return ((theLastToken == theNull || *theLastToken == '\0') ? theNull : (
		/* Skip leading delimiters */
		theLastToken += strspn(theLastToken, theDelimiters),
		/* If at the end of the string, return NULL */
		(*theLastToken == '\0') ? theNull : (
				/* Find the end of the current token */
				theCurrentToken =
					theLastToken, theLastToken += strcspn(theLastToken, theDelimiters),
				/* Replace the delimiter with '\0' to terminate the current token */
				(*theLastToken != '\0') ?
				(*theLastToken++ = '\0', theCurrentToken) : theCurrentToken)
		)
	);
}
