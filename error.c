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

/**
* opcode_error - Handles errors when reading an instruction
* @opcode: The opcode
*
* Return: void
*/
void opcode_error(char *opcode)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", _args->line_number, opcode);
	close_stream();
	free_tokens();
	free_args();
	exit(EXIT_FAILURE);
}

