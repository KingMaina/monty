#include "monty.h"

/**
* read_stream - reads a file stream from a file.
* @fileName: Name of the file
*
* Return: void
*/
void read_stream(char *fileName)
{
	int fd;

	fd = open(fileName, O_RDONLY);
	if (fd == -1)
		stream_error(fileName);

	_args->stream = fdopen(fd, "r");
	if (!(_args->stream))
	{
		close(fd);
		stream_error(fileName);
	}
}
