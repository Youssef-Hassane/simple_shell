#include "../main.h"

/**
 * handle_quotes_and_comments - Handles single and
 * double quotes, and removes comments
 * --------------------------
 * Prototype: void handle_quotes_and_comments(
 * String theInput, bool *inSingleQuote, bool *inDoubleQuote);
 * --------------------------
 * @theInput: The string to process
 * @inSingleQuote: Pointer to a boolean indicating if inside a single quote
 * @inDoubleQuote: Pointer to a boolean indicating if inside a double quote
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

void handle_Quotes_And_Comments(
	String theInput, bool *inSingleQuote, bool *inDoubleQuote)
{
	Integer theIndex;

	ZERO_VARIABLE(theIndex);
	while (theInput[theIndex] != THE_NULL_TERMINATOR)
	{
		switch (theInput[theIndex])
		{
		case '\'': /* Handle single quote */
			if (!(*inDoubleQuote))
				*inSingleQuote = !(*inSingleQuote);
			break;
		case '\"': /* Handle double quote */
			if (!(*inSingleQuote))
				*inDoubleQuote = !(*inDoubleQuote);
			break;
		case '#': /* Handle comment */
			if (!(*inSingleQuote) && !(*inDoubleQuote))
			{
				/* If not in a quote, remove the comment and everything after it */
				theInput[theIndex] = THE_NULL_TERMINATOR;
				return;
			}
			/* If inside a quote, treat '#' as a regular character */
			break;
		default:
			/* If it's just a regular character, do nothing */
			break;
		}
		/* Increment theIndex by 1 */
		INCREASE_BY_ONE(theIndex);
	}
}
