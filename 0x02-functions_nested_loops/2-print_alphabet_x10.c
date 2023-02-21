#include "main.h"
/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * no retuen method
 */
void print_alphabet_x10(void)
{
	char j;
	char i;

	for (j = 1 ; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
