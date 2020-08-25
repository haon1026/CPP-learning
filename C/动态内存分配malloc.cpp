# include <stdio.h>
# include <malloc.h>

void f(int * q, int len)
{
	*q = 200;
	//free(q);   //把q指向的内存释放掉 注释掉，否则导致17行的代码出错
}

int main(void)
{
	int * p = (int *)malloc( sizeof(int) );
	*p = 10;

	printf("%d\n", *p);
	f(p, 4);
	printf("%d\n", *p);

	return 0;
}