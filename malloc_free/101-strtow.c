#include <stdlib.h>
#include "main.h"

/**
 * word_count - Counts the number of words in a string.
 * @str: The string to count words in.
 * Return: The number of words.
 */
int word_count(char *str)
{	/** count compte les mots, in_word initialisé à 1 si dans un mot sinon 0 */
	int count = 0, in_word = 0;

	while (*str) /** parcourt la string */
{	/** verif si pas sur un espace ou déja sur un mot */
	if (*str != ' ' && !in_word)
{
	in_word = 1; /** comme dans un mot initilise in_word à 1 */
	count++;  /** + 1 dans le compteur de mot */
}	/** si on est sur un espace et si on était sur un mot */
	else if (*str == ' ' && in_word)
	in_word = 0; /** hors du mot donc 0 */
	str++; /** caractère suivant */
}
	return (count); /** retourne le nombre de mots trouvés */
}
/**
 * word_length - Gets the length of a word.
 * @str: The string containing the word.
 * Return: The length of the word.
 */
int word_length(char *str)
{
	int length = 0; /** variable qui stocke la longueur du mot */
	/** tant que les caractères sont différents de ' ' et '/0' */
	while (*str && *str != ' ')
{
	length++; /** ajoute 1 à length */
	str++; /** avance dans la string */
}
	return (length); /** retourne la longueur du mot */
}
/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 * Return: An array of words or NULL on failure.
 */
char **strtow(char *str)
{
	char **words; /** pointeur vers un tableau de pointeurs vers les mots */
	/** i parcours str, j add les wrd in array of wrd, k cpy char of wrd */
	int i = 0, j = 0, k = 0, num_words;

	if (str == NULL || *str == '\0') /** vérifie si la string est NULL ou vide */
	return (NULL); /** si oui retourne NULL */
	num_words = word_count(str); /** compte le nombre de mots dans la chaine */
	if (num_words == 0) /** si aucun mot trouvé */
	return (NULL); /** retoune NULL */
	/** alloue mémoire pour tableau de pointeurs de strings */
	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL) /** vérifie si malloc échoue */
	return (NULL); /** si oui retoune NULL */
	while (str[i]) /** parcourt la string pour extraire les mots */
{
	while (str[i] == ' ') /** ignore les espaces */
	i++; /** passe les espaces */
	if (str[i]) /** si un mot est trouvé */
{
	int len = word_length(&str[i]); /** trouve la longueur du mot */
	/** alloue de la mémoire pour le mot */
	words[j] = (char *)malloc((len + 1) * sizeof(char));
	if (words[j] == NULL) /** vérifie si malloc échoue */
{
	for (k = 0; k < j; k++) /** libère la mémoire pour les mots suivants */
	free(words[k]);
	free(words); /** libére la mémoire pour le tableau de mots */
	return (NULL); /** retourne NULL*/
}
	for (k = 0; k < len; k++) /** copie le mot dans l'espace alloué */
	words[j][k] = str[i + k];
	words[j][k] = '\0'; /** ajoute '\0' à la fin de la string */
	i += len; /** passe au mot suivant */
	j++;
}
}
	words[j] = NULL; /** termine le tableau par '\0' */
	return (words); /** retourne la tableau de mots*/
}
