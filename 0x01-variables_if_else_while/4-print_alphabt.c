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
	char alp, e, q;

	e = 'e';
	q = 'q';

	for (alp = 'a'; alp <= 'z'; alp++)
	{
	if ((alp != e) && (alp != q))
	putchar(alp);
	}
	putchar('\n');
	return (0);
}
