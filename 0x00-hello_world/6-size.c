#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
*/
int main(void)
{
	char q;
	int w;
	long int e;
	long long int r;
	float t;

	printf("size of char:%lubytes(s)\n", (unsigned long)sizeof(q));
	printf("size of int:%lubytes(s)\n", (unsigned long)sizeof(w));
	printf("size of long int:%lubytes(s)\n", (unsigned long)sizeof(e));
	printf("size of long long int:%lubytes(s)\n", (unsigned long)sizeof(r));
	printf("size of float:%lubytes(s)\n", (unsigned long)sizeof(t));
	return (0);
}
