#include "main.h"

/**
 * print_sign - print the sign
 *
 * @n: the variable to be checked
 *
 * Return: return 0, 1 adn -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	else
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
}
