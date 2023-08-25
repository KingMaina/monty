#include "monty.h"

void nothing(void);
argSpec *_args = NULL;

/**
 * nothing - Does nothing.
 *
 * Return: void
 */
void nothing(void){}

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
		_args->line_number += 1;
		tokenize();
		get_opcode();
		run_opcode();
		free_tokens();
	}
	close_stream();
	free_args();

	return (EXIT_SUCCESS);
}
