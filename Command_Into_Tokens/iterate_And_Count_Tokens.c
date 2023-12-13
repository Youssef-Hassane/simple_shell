#include "../main.h"

/**
 * iterate_and_count_tokens - Counts the number of tokens
 * Return: The number of tokens
 * --------------------------
 * Prototype: Integer iterate_and_count_tokens(String theToken);
 * --------------------------
 * @theToken: The token to be counted
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */
Integer iterate_And_Count_Tokens(String theToken)
{
	/* Declare variables */
	Integer counter;
	/* Initialize counter to 0 */
	ZERO_VARIABLE(counter);
	/* Iterate through tokens and count them */
	for (; theToken; INCREASE_BY_ONE(counter))
	{
		theToken = string_Tokenization(theNull, THE_DELIMITERS);
	}
	/* Return the count of tokens */
	return (counter);
}
