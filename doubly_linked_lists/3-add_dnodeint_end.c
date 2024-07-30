#include "lists.h"
/**
 * add_dnodeint_end - add new node at the end of the double list
 * @head: Double pointer to the head of the list
 * @n: Value to store in the new node
 * Return: Adress of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp = NULL;
dlistint_t *new_node_end = malloc(sizeof(dlistint_t)); /* alloc memory */
if (new_node_end == NULL) /* vérifie si l'alloc échoue */
return (NULL);

new_node_end->n = n; /* donne au champ n de new_node la valeur fournie */
/* initialise le champ prev de new_node à NULL */
new_node_end->next = NULL;

if (*head == NULL) /* si la liste est vide */
{
/* signifie que se new_node_end est le premier donc prev = NULL */
new_node_end->prev = NULL;
*head = new_node_end; /* update head pour qu'il pointe vers new_node_end */
}
else /* sinon */
{
/* Initialise temp après vérification que la liste n'est pas vide */
temp = *head;

while (temp->next != NULL) /* parcourt la liste jusqu'au dernier node */
temp = temp->next;

/* update le dernier node pour qu'il pointe vers le nouveau */
temp->next = new_node_end;
/* update le champ prev pour qu'il pointe vers l'ancien dernier node */
new_node_end->prev = temp;
}
return (new_node_end);
}
