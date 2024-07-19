#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdarg.h>
#include <stdio.h>
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
/** l18 pointeur vers une chaîne de caractères qui représente un symbole */
/** l19 pointeur vers une fonction qui prend une va_list comme argument */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list args);
} printer_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);
#endif
