#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 
 *
*/
void print_alphabet_x10(void)
{
	int line, ch;
	for (line = 0; line <= 9; line++)
	{
		for (ch = '0'; ch <= '9'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
