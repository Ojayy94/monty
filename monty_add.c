#include "monty.h"

/**
  * add - Function that adds a new node at the beginning of the stack
  * @stack: The head of the stack
  * @line_number: The value to adds on the stack
  * Return: New node
  */

void add(stack_t **stack, unsigned int line_number)
{
	unsigned int a = 0, b = 0, count = 0;
	stack_t *adds = *stack;

	length = count_stack(*stack);

	if (length < 2)
		handle_error(ERR_ADD_USG, NULL, line_number, NULL);

	a = adds->n;
	b = adds->next->n;
	adds->next->n = a + b;
	*stack = adds->next;
	free(adds);
}
