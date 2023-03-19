#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int g;
	int p;

	for (g = 0; g < 100; g++)
	{

	for (p = g; p < 100; p++)
	{
	putchar(g / 10 + '0');
	putchar(g % 10 + '0');
	putchar(' ');
	putchar(p / 10 + '0');
	putchar(p % 10 + '0');
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
