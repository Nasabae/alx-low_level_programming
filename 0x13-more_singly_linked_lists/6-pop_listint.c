#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: the head of the linked list
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *n_head;
int z = 0;
if (*head != NULL)
{
n_head = (*head)->next;
z = (*head)->n;
free(*head);
*head = n_head;
}
return (z);
}
