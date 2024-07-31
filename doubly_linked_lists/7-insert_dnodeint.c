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
if (h == NULL)
return (NULL);

if (idx == 0)
return (add_dnodeint(h, n)); /* insère un nouveau node */

temp = *h; /* assigne l'adresse de h à temp */
for (index = 0; temp != NULL && index != idx - 1; index++) /* idx = 4 */
temp = temp->next; /* passe au prochain node */

if (temp == NULL)
return (NULL);
if (temp->next == NULL && index == idx - 1) /* idx = 4 */
return (add_dnodeint_end(h, n)); /* add un node avec les args h et n */

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node = n; /* n = 4096 */
new_node->next = temp->next; /* pareil avec next */
new_node->prev = temp; /* assigne l'adresse de temp à new_node->prev */
if (temp->next != NULL) /* vérif si temp->next est le last node de la liste */
temp->next->prev = new_node; /* assign new_node au champ prev du next node */

temp->next = new_node; /* définie temp->next avec new_node */
return (new_node); /* retourne new_node */
}
