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

	printf("zise of char:%lubytes(s)\n", (unsigned long)sizeof(q));
	printf("zise of int:%lubytes(s)\n", (unsigned long)sizeof(w));
	printf("zise of long int:%lubytes(s)\n", (unsigned long)sizeof(e));
	printf("zise of long long int:%lubytes(s)\n", (unsigned long)sizeof(r));
	printf("zise of float:%lubytes(s)\n", (unsigned long)sizeof(t));
	return (0);
}
