#include "main.h"

/**
 * print-alphabelt entry state
 * return 0; becuse of int used for main
 */
void print_alphabet(void)
{
	char c = 'a';

	while(c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');
}
