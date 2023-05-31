#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int z;
listint_t *nw_node;
listint_t *tempo = *head;
nw_node = malloc(sizeof(listint_t));
if (!nw_node || !head)
return (NULL);
nw_node->n = n;
nw_node->next = NULL;
if (idx == 0)
{
nw_node->next = *head;
*head = nw_node;
return (nw_node);
}
for (z = 0; tempo && z < idx; z++)
{
if (z == idx - 1)
{
nw_node->next = tempo->next;
tempo->next = nw_node;
return (nw_node);
}
else
tempo = tempo->next;
}
return (NULL);
}
