#include "lists.h"
/**
 * add_dnodeint - Add new node at the beginning of the dlistint_t
 * @head: Pointer to the head of the list
 * @n: Value to store in new_node
 * Return: Adress of the new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t)); /* alloc memory new_node */
if (new_node == NULL) /* vérifie si l'alloc échoue */
return (NULL);

new_node->n = n; /* donne au champ n de new_node la valeur fournie */
/* fait pointer le champ next de new_node vers l'ancien premier node */
new_node->next = *head;
/* initialise le champ prev de new_node à NULL */
new_node->prev = NULL;

if (*head != NULL) /* si la liste n'est pas vide */
(*head)->prev = new_node; /* mets à jour le champ prev de l'ancien 1er node */

/* update le head de la liste pour qu'elle pointe vers new_node */
*head = new_node;

return (new_node); /* retourne l'adresse de new_node */
}
