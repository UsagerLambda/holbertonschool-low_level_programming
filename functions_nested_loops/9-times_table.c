#include "main.h"
/**
 * times_table  - Entry point
 * void - void
 * Description : print 9 times table, starting with 0
 * Return: Alway 0 (Success)
 */
void times_table(void)
{
  int nm1, nm2, tab;
    tab = 10;
    for (nm2 = 0; nm2 < tab; nm2++)
      {
    for (nm1 = 0; nm1 < tab; nm1++)
      {
	nm1 = nm1 * nm2;
	_putchar(nm1 + '0');
	if (nm1 < tab)
	  {
	_putchar(',');
	_putchar(' ');
	  }
      }
    _putchar('\n');
      }
}
