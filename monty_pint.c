#include "monty.h"

/**
 * pint - Prints the top value of a stack.
 * @stack: A pointer to the top mode node of stack_t
 * @line_number: The current working line number
 * Return: Nothing
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL)
	{
		m_error(pint_error(line_number));
		return (EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->next->n);
}
