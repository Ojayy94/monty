#include "monty.h"

/**
 * pall - Prints all the values on the stack
 * @stack: The head of the stack
 * @line_number: line of the error
 * Return: pall
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *present = (*stack)->next;
	(void)line_number;

	while (present)
	{
		printf("%d\n", present->n);
		present = present->next;
	}
}
