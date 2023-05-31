#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - Frees a linked list
  * @head: The head of the linked list
  */
void free_listint(listint_t *head)
{
listint_t *tempo;
while (head)
{
tempo = head->next;
free(head);
head = tempo;
}
}
