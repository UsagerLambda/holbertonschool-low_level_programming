#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - imprime des chaînes de caractères
 * @separator: chaine de caractère ','
 * @n: valeur du premiers nombre de la liste
 * @...: varadic paramètre
 */
void print_all(const char * const format, ...)
{
va_list args;
va_start(args, format);
printf("%s", format);
va_end(args);
printf("\n");
}