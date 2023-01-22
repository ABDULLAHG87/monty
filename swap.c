#include "monty.h"

/**
* f_swap - function that swaps the top two elements of the stack
* @head: head of stack
* @counter: line count
*
* Return: nothing
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *current;
	int length = 0, temp;

	current = *head;
	while (current)
	{
		current = current->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	current = *head;
	temp = current->n;
	current->n = current->next->n;
	current->next->n = temp;
}
