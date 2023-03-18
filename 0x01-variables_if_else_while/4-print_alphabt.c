#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -entry point
 * Print all the letters except q and e
 * Return: always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
		{
			if (n == 101 || n == 112)
			{
				n++;
				continue;
			}
			putchar(n);
			n++;
		}
	putchar('\n');
	return (0);
}
