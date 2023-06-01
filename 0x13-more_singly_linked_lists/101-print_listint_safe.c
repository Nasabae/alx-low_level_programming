#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list with a loop safely
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *tempo_n = NULL;
const listint_t *len = NULL;
size_t counter = 0;
size_t nw_node;
tempo_n = head;
while (tempo_n)
{
printf("[%p] %d\n", (void *)tempo_n, tempo_n->n);
counter++;
tempo_n = tempo_n->next;
len = head;
nw_node = 0;
while (nw_node < counter)
{
if (tempo_n == len)
{
printf("-> [%p] %d\n", (void *)tempo_n, tempo_n->n);
return (counter);
}
len = len->next;
nw_node++;
}
if (!head)
exit(98);
}
return (counter);
}
