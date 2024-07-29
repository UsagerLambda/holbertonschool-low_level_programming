#include "lists.h"
/**
 * add_node - Add new nodes at the beginning of the list_t list.
 * @head: double pointer to the head of the list
 * @str: string to duplicate and add to new_node
 * Return: adress of the new_node or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
int i = 0;
list_t *new_node = malloc(sizeof(list_t)); /* alloue mémoire for a new node */
if (new_node == NULL) /* vérif si l'alloc à échoué */
return (NULL);
/* duplique string str et l'affecte à new_node->str */
new_node->str = strdup(str);
if (new_node->str == NULL) /* vérif si la duplication à échoué */
{
free(new_node); /* si oui free la mémoire allouée pour new_node */
return (NULL);
}
while (str[i] != '\0') /* compte le nombre de char dans la string str */
i++;
new_node->len = i; /* assigne la longueur de la string à new_node->len */
new_node->next = *head; /* pointe new_node->next vers l'actuel premier node */
*head = new_node; /* update le pointeur vers head vers new_node*/
return (new_node); /* retourne le new_node */
}
