#include "monty.h"

/**
  * push - Function that adds a new node at the beginning of the stack
  * @stack: The head of the stack
  * @line_number: The value to adds on the stack
  * Return: New node
  */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;

	new = malloc(sizeof(stack_t));

	new->n = line_number;

	if (new = NULL)
		m_error(ERR_BAD_MALL, NULL, 0, NULL);
		return (EXIT_FAILURE)
	if (*stack)
	{
		new->next = *stack;
		new->prev = *stack->prev;
		*stack->prev = new;
		*stack = new;
		return;
	}
	new->next = *stack;
	new->prev = NULL;
	*stack = new;
}
