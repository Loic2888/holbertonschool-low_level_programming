#include "lists.h"
#include <stdlib.h>
/**
 * my_strcpy - copies a string from src to dest
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the destination string
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
 * my_strlen - calculates the length of a string
 * @str: input string
 *
 * Return: length of the string
 */
size_t my_strlen(const char *str)
{
	const char *ptr = str;

	while (*ptr != '\0')
	{
		ptr++;
	}
	return (ptr - str);
}
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	len = my_strlen(str);
	new_node->str = malloc(len + 1);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	my_strcpy(new_node->str, str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
