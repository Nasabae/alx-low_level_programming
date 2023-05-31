#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: the head of the linked list
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
int s = 0;
listint_t *tempo = head;
while (tempo)
{
s += tempo->n;
tempo = tempo->next;
}
return (s);
}
