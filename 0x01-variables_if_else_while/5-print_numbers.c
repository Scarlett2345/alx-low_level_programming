#include <stdio.h>

/**
*main - print 0123456789
*Return: Always 0 (Success)
*/

int main(void)

{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);

	putchar('\n');

	return (0);
}
