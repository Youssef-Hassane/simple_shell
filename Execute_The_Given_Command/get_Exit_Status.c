#include "../main.h"

/**
 * get_Exit_Status - Get the exit status from the waitpid status
 * Return: The exit status
 * --------------------------
 * @theCondition: Exit status returned by waitpid
 * --------------------------
 * Extracts the exit status from the waitpid status and returns it.
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

Integer get_Exit_Status(Integer theCondition)
{
	/* Extract the exit status from the waitpid status */
	return ((theCondition & 0xFF00) >> 8);
}
