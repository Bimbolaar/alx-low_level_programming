#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert in the list.
 * Return: address of the head or NULL if failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	size_t nchar;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	add->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	add->len = nchar;
	add->next = *head;
	*head = add;

	return (*head);
}
