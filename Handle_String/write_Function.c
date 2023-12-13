#include "../main.h"

/**
 * write_Function - Wrapper for the write function to write to STDERR_FILENO
 * Return: the number of bytes written or -1 on error
 * --------------------------
 * Writes data to the standard error output.
 * --------------------------
 * @theBuffer: Pointer to the data to be written.
 * @theLength: Number of bytes to write.
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

ssize_t write_Function_Standard_Error(
	const void *theBuffer, size_t theLength)
{
	/* Use the write function to write to STDERR_FILENO */
	return (write(STDERR_FILENO, theBuffer, theLength));
}

/**
 * write_Function - Wrapper for the write function to write to STDOUT_FILENO
 * Return: the number of bytes written or -1 on error
 * --------------------------
 * Writes data to the standard output.
 * --------------------------
 * @theBuffer: Pointer to the data to be written.
 * @theLength: Number of bytes to write.
 * --------------------------
 * By Youssef Hassane & Ahmed Abdelhamid
 */

ssize_t write_Function_Standard_Output(
	const void *theBuffer, size_t theLength)
{
	/* Use the write function to write to STDERR_FILENO */
	return (write(STDOUT_FILENO, theBuffer, theLength));
}
