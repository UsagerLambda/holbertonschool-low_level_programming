#include "lists.h"
/**
 * delete_dnodeint_at_index - Entry point
 * @head: NULL
 * @index: NULL
 * Return: NULL
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i;

if (current == NULL)
return (-1);

/* si current == NULL donc list vide, rien a delete, passe au node suivant */
for (i = 0; current != NULL && i < index; i++)
current = current->next;

if (current == NULL)
return (-1);

if (current == *head) /* vérifie si le node à delete est la tête de liste */
*head = current->next; /* la tête deviens le node suivant */

if (current->prev != NULL) /* si node n'est pas head */
/* le champ next du node précedent est update pour pointer le node suivant */
current->prev->next = current->next;

if (current->next != NULL) /* si le node actuel n'est pas le dernier */
/* le champ prev du node suivant est update pour pointer le node précédent */
current->next->prev = current->prev;

free(current); /* la mémoire occupé par le node est supprimé */
return (1); /* retourne 1 pour indiquer que le suppression à réussi */
}
