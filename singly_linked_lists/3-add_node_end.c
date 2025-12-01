#include "lists.h"
#include <stdio.h>
/**
 * my_strlen - calcule la longueur d'une chaîne
 * @str: chaîne en entrée
 *
 * Return: longueur de la chaîne
 */
size_t my_strlen(const char *str)
{
	const char *ptr = str;

	while (*ptr != '\0')
		ptr++;
	return (ptr - str);
}
/**
 * my_strcpy - copie une chaîne sans utiliser strcpy
 * @dest: destination
 * @src: source
 *
 * Return: pointeur sur dest
 */
char *my_strcpy(char *dest, const char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
/**
 * my_strdup - duplique une chaîne sans utiliser strdup
 * @str: chaîne source
 *
 * Return: pointeur sur copie nouvellement allouée, ou NULL si erreur
 */
char *my_strdup(const char *str)
{
	size_t len = my_strlen(str);
	char *copy = malloc(len + 1);

	if (!copy)
		return (NULL);
	my_strcpy(copy, str);
	return (copy);
}
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = my_strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
