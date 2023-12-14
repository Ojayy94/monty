#include "monty.h"

/**
  * swap - Function that swaps a node of the stack
  * @stack: The head of the stack
  * @line_number: The value to add on the stack
  * Return: New node
  */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *last;

	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		m_error(short_stack_error(line_number, "swap"));
		return (EXIT_FAILURE);
	}

	last = (*stack)->next->next;
	(*stack)->next->next = last->next;
	(*stack)->next->prev = last;

	if (last->next)
		last->next->prev = (*stack)->next;
	last->next = (*stack)->next;
	last->prev = *stack;
	(*stack)->next = last;
}
