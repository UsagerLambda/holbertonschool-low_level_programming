#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert a new node at a given position
 * @h: pointer to head
 * @idx: index where the new node should be inserted
 * @n: value of the new node
 * Return: pointer of the new node or null if it fail
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int index = 0;
dlistint_t *new_node, *temp;

if (h == NULL) /* vérifie si le head est NULL */
return (NULL); /* si oui return NULL */

if (idx == 0) /* si idx est égal à 0 */
return (add_dnodeint(h, n)); /* insère un nouveau node */

temp = *h; /* assigne l'adresse de h à temp */
/* vérifie si temp != NULL et index n'est pas égal à 4 (idx(5) - 1) */
for (index = 0; temp != NULL && index != idx - 1; index++)
temp = temp->next; /* passe au prochain node */

if (temp == NULL) /* si temp est NULL */
return (NULL); /* retourne NULL*/

/* si temp->next est NULL et que index est égal à idx - 1 (4) */
if (temp->next == NULL && index == idx - 1)
return (add_dnodeint_end(h, n)); /* add un node avec les args h et n */

/* assigne à new_node la mémoire équivalente à dlistint_t */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL) /* vérifie si l'alloc à échouée */
return (NULL); /* si oui retourne NULL */

new_node->n = n; /* assigne à new_node->n la valeur de n (4096) */
new_node->next = temp->next; /* pareil avec next */
new_node->prev = temp; /* assigne l'adresse de temp à new_node->prev */

/* vérifie si temp->next est le dernier node de la liste */
if (temp->next == NULL)
/* accède au champ prev du node suivant et le definie sur new_node */
temp->next->prev = new_node;

temp->next = new_node; /* définie temp->next avec new_node */
return (new_node); /* retourne new_node */
}
