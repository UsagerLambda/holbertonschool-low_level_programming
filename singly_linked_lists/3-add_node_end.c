#include "lists.h"
/**
 * add_node_end - add new node at the end of list_t list.
 * @head: NULL
 * @str: NULL
 * Return: NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
int i = 0; /* variable d'itération pour str */
list_t *current = NULL; /* pointeur temporaire pour parcourir la liste */
list_t *new_node_end = malloc(sizeof(list_t)); /*give memory to new_node_end */

if (new_node_end == NULL) /* verif if new_node_end est NULL */
return (NULL);

new_node_end->str = strdup(str); /* Copie str dans new_node_end */
if (new_node_end->str == NULL) /* vérifie si la copie à échoué */
{
	free(new_node_end); /* Si oui libère la mémoire allouée */
	return (NULL);
}
while (str[i] != '\0') /* Calcule la longueur de str */
i++;
new_node_end->len = i; /* stocke la longueur de str dans le node*/
new_node_end->next = NULL; /* initialise le champ next du node à NULL */

if (*head == NULL) /* si la liste est vide, la nouveau node devient le 1er */
{
	*head = new_node_end;
	return (new_node_end);
}
current = *head;
while (current->next != NULL) /* parcourt la liste jusqu'à la fin */
current = current->next;

current->next = new_node_end; /* ajoute le new node à la fin de la liste */
return (new_node_end);
}
