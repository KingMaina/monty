#ifndef __MONTY_H
#define __MONTY_H

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define DELIMS " \n"

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct opcode - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct opcode
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} opcode_t;

/**
 * struct arguments - store op codes
 * @stream: File stream
 * @line: a line of text input
 * @line_number: line number
 * @tokens: array of tokens
 * @num_tokens: number of tokens
 * @stack_len: length of stack
 * @head: head of stack
 * @opcode: opcode
 *
 * Description: store op codes
 * for stack, queues, LIFO, FIFO
 */
typedef struct arguments
{
	FILE *stream;
	char *line;
	unsigned int line_number;
	char **tokens;
	int num_tokens;
	int stack_len;
	stack_t *head;
	opcode_t *opcode;
} argSpec;

void init_args(void);
void read_stream(char *fileName);
void stream_error(char *fileName);
void tokenize(void);
void get_opcode(void);
void run_opcode(void);
void opcode_error(char *opcode);
int is_number(char *str);
void close_stream(void);
void free_args(void);
void free_tokens(void);
void free_all(void);
void free_head(void);
void free_stack(stack_t *stack);
void pop_stack(void);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
extern argSpec *_args;


#endif /* __MONTY_H */
