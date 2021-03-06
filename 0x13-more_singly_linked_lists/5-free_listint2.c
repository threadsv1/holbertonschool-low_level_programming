#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 *@head: listint_t pointer to a list node
 */
void free_listint2(listint_t **head)
{
listint_t *aux;
if (head == NULL)
return;
while (*head != NULL)
{
aux = *head;
*head = (*head)->next;
free(aux);
}
head = NULL;
}
