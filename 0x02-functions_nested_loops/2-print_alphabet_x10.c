#include "main.h"
/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * no retuen method
 */
void print_alphabet_x10(void)
{
	char j = 0;

	while (j <= 10)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
