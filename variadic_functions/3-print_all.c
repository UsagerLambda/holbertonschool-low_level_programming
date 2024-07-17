#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Imprime un caractère
 * @args: Liste d'arguments contenant le caractère à imprimer
 */
void print_char(va_list args) /** va_list args : Liste arguments variables */
{
/** Extrait l'argument suivant de la liste */
/** en le traitant comme un int (le type char est promu en int) */
	printf("%c", va_arg(args, int)); /** printf print le caractère extrait */
}
/**
 * print_int - Imprime un entier
 * @args: Liste d'arguments contenant l'entier à imprimer
 */
void print_int(va_list args)
{
/** Extrait l'argument suivant comme un entier. */
	printf("%d", va_arg(args, int)); /** printf print l'entier extrait */
}
/**
 * print_float - Imprime un float
 * @args: Liste d'arguments contenant le flot à imprimer
 */
void print_float(va_list args)
{
/** Extrait l'argument suivant comme un double. */
/** (pour les float, double est utilisé dans va_arg) */
	printf("%f", va_arg(args, double)); /** printf print le float extrait */
}
/**
 * print_string - Imprime une chaîne de caractères
 * @args: Liste d'arguments contenant la chaîne à imprimer
 */
void print_string(va_list args)
{
/** va_arg(args, char *) : Extrait l'arg suivant comme une string */
/** et l'assigne à un pointeur de chaine de caractère "str" */
	char *str = va_arg(args, char *);

	if (str == NULL) /** si str = NULL */
		str = "(nil)"; /** si oui remplace NULL par (nil) */
	printf("%s", str); /** Imprime la chaîne de caractères */
}

/**
 * print_all - Imprime divers types selon le format donné
 * @format: Liste des types d'arguments passés à la fonction
 */
void print_all(const char * const format, ...)
{
/** tableau de structures associant les symbole à une fonction associée */
	printer_t printers[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_list args; /** Déclare une liste d'arguments variables. */
	int i = 0, j; /** Variables d'intération pour les boucles */
	char *sep = ""; /** Initialise une chaîne vide pour gérer les sep. */
/** Initialise args pour commencer à lire les arguments après format --> */
	va_start(args, format);

	while (format && format[i]) /** 1er boucle pour parcourir le format. */
{
	j = 0; /** set j à 0 */
	/** 2eme boucle pour trouver le bon symbole */
	while (printers[j].symbol != NULL)
{
	if (format[i] == *(printers[j].symbol))
{
	printf("%s", sep); /** Imprime le séparateur */
	printers[j].print(args); /** call la fonction d'impression correspondante. */
	sep = ", "; /** set sep à ", " après l'impression du 1er symbole */
	break;
}
	j++; /** avance dans les symboles */
	}
	i++; /** avance dans format */
}
	va_end(args); /** Termine l'utilisation de la liste d'arguments variables. */
	printf("\n"); /** saute une ligne à la fin */
}
