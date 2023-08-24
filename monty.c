#include "monty.h"

argSpec *_args = NULL;

/**
* main - Entry point of monty application
* @argc: Number of command arguments.
* @argv: Array of command arguments.
*
* Return: 0 success, 1 otherwise
*/
int main(int argc, char **argv)
{
	size_t n = 0;

	if (argc != 2) 
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	init_args();
	read_stream(argv[1]);

	while (getline(&_args->line, &n, _args->stream) != -1)
	{
		args->line_number += 1;
		tokenize_command();
		get_opcode();
		run_opcode();
		free_tokens();
	}
	close_stream();
	free_args();

	return (EXIT_SUCCESS);
}
