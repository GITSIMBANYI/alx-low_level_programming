#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int m;
	int g;

	for (n = '0'; n < '9'; n++)
	{

	for (m = n + 1; m <= '9'; m++)
	{

	for (g = m + 1; g <= '9'; g++)
	{

	if ((m != n) != g)
	{
	putchar(n);
	putchar(m);
	putchar(g);
	if (n == '7' && m == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
