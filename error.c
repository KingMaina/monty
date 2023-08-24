#include "monty.h"

/**
* stream_error - Handles errors when reading a file
* @fileName: The name of the file
*
* Return: void
*/
void stream_error(char *fileName)
{
	fprintf(stderr, "Error: Can't open file %s\n", fileName);
	/* free_args(); */
	exit(EXIT_FAILURE);
}
