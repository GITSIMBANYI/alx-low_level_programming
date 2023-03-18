#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
		putchar(alp);
	putchar('\n');

	return (0);
}
