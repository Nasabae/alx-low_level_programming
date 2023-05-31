#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_node_end - Adds a new node at the end of a list
  * @head: The original linked list
  * @str: The string to add to the node
  * Return: The address of the new list or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_list;
list_t *tempo = *head;
unsigned int len = 0;
while (str[len])
len++;
new_list = malloc(sizeof(list_t));
if (!new_list)
return (NULL);
new_list->str = strdup(str);
new_list->len = len;
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
