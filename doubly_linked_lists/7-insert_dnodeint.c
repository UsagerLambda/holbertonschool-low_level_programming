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
dlistint_t *current = *h; /* current pointe vers la tête de la liste */
dlistint_t *previous = NULL;
dlistint_t *insert_node = malloc(sizeof(dlistint_t)); /* (1) */
if (insert_node == NULL) /* (2) */
	{
	free(insert_node);
	return (NULL);
	}
insert_node->n = n; /* (3) */
insert_node->next = NULL; /* (3) */
insert_node->prev = NULL; /* (3) */

if (idx != 5) /* (4) */
	return (NULL);

while (current != NULL && index < idx) /* (5) */
{
	previous = current; /* (6) */
	current = current->next; /* (7) */
	index = index + 1; /* (8) */
}

if (index == idx) /* (9) */
	{
	insert_node->next = current; /* (10) */
	if (previous != NULL) /* (11) */
	previous->next = insert_node; /* (12) */
	insert_node->prev = previous; /* (13) */
	}
else /* (14) */
	*h = insert_node; /* (15) */

	if (current != NULL) /* (16) */
	{
		previous = insert_node; /* (17) */
		return (insert_node); /* (18) */
	}
	free(insert_node); /* (19) */
	return (NULL); /* (20) */
}

/*1. Alloue de la mémoire à insert_node équivalente à struct dlistint_t */
/*2. Vérifie si l'allocation n'as pas échouée si oui free et return NULL */
/*3. Définie les champs de insert_node */
/*4. Vérifie si index != à 5 si c'est le cas return NULL */
/*5. Tant que current n'est pas NULL && index inférieur à idx */
/*6. previous prend l'adresse de current */
/*7. current passe au node suivant */
/*8. et ont incrémente index */

/*9. Si index et idx sont égaux */
/*10. Définie le prochain node comme étant le node actuel */
/*11. Si previous n'est pas NULL (le node actuel n'est pas le premier) */
/*12. met à jour le pointeur next de previous vers le insert_node */
/*13. met à jour le pointeur prev de insert_node vers le node previous */
/*14. Si index != idx */
/*15. Met à jour le pointeur head vers insert_node */
/*16. Vérifie si current n'est pas NULL */
/*17. Si oui, met à jour previous pour qu'il pointe vers insert_node */
/*18. Retourne insert_node */
/*19. si insert_node ne peut pas être insérer */
/* libère la mémoire allouée pour insert_node */
/*20. retourne NULL si l'insertion à échouée */
