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
	_args->stream = NULL;
	_args->line = NULL;
}
