#include "../main.h"


/**
 * is_It_A_Terminal - Checks if a file descriptor is a terminal
 * Return: 1 if the file descriptor is a terminal, 0 otherwise
 * --------------------------
 * Prototype: Integer is_It_A_Terminal(int fileDescriptor)
 * --------------------------
 * @fileDescriptor: The file descriptor to check
 * By Youssef Hassane & Ahmed Abdelhamid
 */
Integer is_It_A_Terminal(int fileDescriptor)
{
	/* File status information */
	struct stat fileStatus;
	/* Use fstat to get information about the */
	/* file associated with the file descriptor */
	if (fstat(fileDescriptor, &fileStatus) == NEGATIVE_ONE)
	{
		/* Handle error if fstat fails. */
		perror("Error in fstat");
		/* Assuming failure means it's not a terminal. */
		return (ZERO);
	}
	/* Check if the file is a character special file */
	/* (which typically represents a terminal) */
	return (S_ISCHR(fileStatus.st_mode));
}
