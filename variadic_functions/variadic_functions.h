#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct printer - Structure associant un symbole à une fonction qui print
 * @symbol: Chaîne de caractères contenant un symbole pour le type de donnée
 * @print: Pointeur vers fonction prenant `va_list` et print le type de donnée
 *
 * Cette structure est utilisée pour associer chaque symbole
 * à une fonction qui print ce type de donnée. Le tableau de ces
 * structures est parcouru dans la fonction print_all pour call la fonction
 * appropriée selon le symbole rencontré dans la chaîne de format.
 */
typedef struct printer
{
/** pointeur vers une chaîne de caractères qui représente un symbole */
	char *symbol;
/** pointeur vers une fonction qui prend une va_list comme argument */
	void (*print)(va_list args);
} printer_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
