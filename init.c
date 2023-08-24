#include "monty.h"

void init_args()
{
	_args = malloc(sizeof(argSpec));
	if (!_args)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_args();
		exit(EXIT_FAILURE);
	}
	_args->opcode = malloc(sizeof(opcode_t));
	if (!_args->opcode)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_args();
		exit(EXIT_FAILURE);
	}
	_args->stream = NULL;
	_args->line = NULL;
	_args->tokens = NULL;
	_args->head = NULL;
	_args->line_number = 0;
	_args->num_tokens = 0;
	_args->stack_len = 0;
}
