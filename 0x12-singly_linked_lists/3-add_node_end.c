#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - ...
 * @head: ...
 * @str: ...
 *
 * Return: ...
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *end_node = *head;
size_t len = 0;
while (str && str[len])
len++;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
new->len = len;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (end_node->next)
end_node = end_node->next;
end_node->next = new;
return (new);
}
