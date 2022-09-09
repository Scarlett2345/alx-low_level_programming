#include <stdio.h>

/**
*main - print 0-9 separated with commas, using putchar
*Return: Always 0 (Success)
*/
int main(void)

{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
