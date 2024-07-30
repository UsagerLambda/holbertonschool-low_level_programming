#include "lists.h"
/**
 * sum_dlistint - Add the sum of all the data
 * @head: Pointer to the head of the list
 * Return: Sum of all datas
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0; /* variable pour stocker la somme */
dlistint_t *current = head; /* Pointeur pour parcourir la liste */

while (current != NULL) /* parcourt la liste */
{
sum += current->n; /* ajoute la valeur de n à la somme */
current = current->next; /* avance au prochain node */
}
return (sum); /* retourne la somme totale */
}
