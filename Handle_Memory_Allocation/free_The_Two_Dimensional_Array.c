#include "../main.h"

/**
 * free_The_Two_Dimensional_Array - Free the two dimensional array
 * Return: Nothing
 * --------------------------
 * Prototype: void free_The_Two_Dimensional_Array(char **theArray);
 * --------------------------
 * @theArray: The 2D array to be freed
 * --------------------------
 * By Youssef Hassane
 */

void free_The_Two_Dimensional_Array(StringArray theArray)
{
	/* Declare variables */
	int theIndex;

	ZERO_VARIABLE(theIndex);

	if (!theArray)
	{
		return;
	}
	/* Free each element of the 2D array */
	for (; theArray[theIndex]; theIndex++)
	{
		FREE_VARIABLE(theArray[theIndex]);
		theArray[theIndex] = NULL;
	}
	FREE_VARIABLE(theArray);
	theArray = NULL;
}
