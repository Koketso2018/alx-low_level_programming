#include <stdio.h>

/**
 * main - main function
 *
 * Return: return 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 9)
		{
			putchar(i + '0'+'\n');
		}
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}
	
	return (0);
}
