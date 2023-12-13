#include "../main.h"

/**
 * remove_comments - Removes comments from a string
 * Return: The string without comments
 * --------------------------
 * Prototype: char *remove_comments(char *input);
 * --------------------------
 * @theInput: The string to remove comments from
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */
String remove_Comments(String theInput)
{
	bool inSingleQuote = false;
	bool inDoubleQuote = false;

	handle_Quotes_And_Comments(theInput, &inSingleQuote, &inDoubleQuote);

	/* If there's no comment, just return the original input */
	return (theInput);
}
