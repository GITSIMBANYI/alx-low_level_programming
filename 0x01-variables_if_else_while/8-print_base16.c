#include <stdio.h>
/**
 * main - entry point
 * Description: 'prints all signgle digit numbers of base 10'
 * Return: always 0
 */
int main(void)
{
	int i;
	char alp;

	for (i = '0'; i <= '9'; i++)
	putchar(i);

	for (alp = 'a'; alp <= 'f'; alp++)
	putchar(alp);
	putchar('\n');

	return (0);
}
