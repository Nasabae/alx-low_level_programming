#include "lists.h"

/**
  * add_nodeint_end - Adds a new node to the end of a linked list
  * @head: The head of the linked list
  * @n: The value to add to the end of the linked list
  * Return: The address of the new element, or NULL if it fails
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_list;
listint_t *tempo = *head;
new_list = malloc(sizeof(listint_t));
if (!new_list)
return (NULL);
new_list->n = n;
new_list->next = NULL;
if (*head == NULL)
{
*head = new_list;
return (new_list);
}
while (tempo->next)
tempo = tempo->next;
tempo->next = new_list;
return (new_list);
}
