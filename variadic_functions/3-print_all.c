#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - imprime des chaînes de caractères
 * en fonction du format de données
 * @format: liste des types de données
 * @...: varadic paramètre
 */
void print_all(const char * const format, ...)
{
	va_list args; /** création de ma liste */
	const char *str; /** pointeur vers va_arg(args char*) */
	char *separator = ""; /** chaine ", " */
	int i = 0; /** i pour parcourir format */

	va_start(args, format); /** début de ma liste */
	while (format && format[i]) /** tant que format && format[i] != '\0' */
{
	/** test l'égalité de case dans dans format[i] */
	switch (format[i])
{
	case 'c': /** si char*/
	printf("%s%c", separator, va_arg(args, int));
	break;
	case 'i': /** si entier */
	printf("%s%d", separator, va_arg(args, int));
	break;
	case 'f': /** si float */
	printf("%s%f", separator, va_arg(args, double));
	break;
	case 's': /** si chaine de caractère */
	str = va_arg(args, char*);
	if (str == NULL)
	str = "(nil)";
	printf("%s%s", separator, str);
	break;
}
	separator = ", ";
	i++;
}
	va_end(args);
	printf("\n");
}
