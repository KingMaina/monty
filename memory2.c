#include "monty.h"

/**
* free_all - Deallocates memory of all variables
*/
void free_all(void)
{
	close_stream();
	free_tokens();
	free_args();
}
