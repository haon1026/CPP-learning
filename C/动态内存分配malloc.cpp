# include <stdio.h>
# include <malloc.h>

void f(int * q, int len)
{
	*q = 200;
	//free(q);   //��qָ����ڴ��ͷŵ� ע�͵���������17�еĴ������
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