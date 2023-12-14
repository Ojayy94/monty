#include "monty.h"

/**
 * pop - Removes the value at the top of the stack
 * @stack: stack
 * @line_number: line error number
 * Return: Nothing
 */

void pop(stack_t **stack, unsigned int line_number);
{
	stack_t *next;

	if ((*stack)->next == NULL)
	{
		m_error(pop_error(line_number));
		return (EXIT_FAILURE);
	}

	next = (*stack)->next->next;
	free((*stack)->next);
	if (next)
		next->prev = *stack;
	(*stack)->next = next;
}
