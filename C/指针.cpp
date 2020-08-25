# include <stdio.h>

	int *p;
	int *q;

void swap(int * p, int * q)
{
	int t;

	t = *p;
	*p = *q;
	*q = t;
}

int main(void)
{
	int a = 3;
	int b = 5;

	swap(&a, &b);
	printf("a = %d, b = %d\n",a,b);

	return 0;
}
