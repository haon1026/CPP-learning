# include <stdio.h>

/*void max(int i,int j)
{
	if(i>j)
		printf("%d\n",i);
	else
		printf("%d\n",j);
}
*/

int max(int i,int j)
{
	if(i>j)
		return i;
	else
		return j;
}

int main(void)
{
	int a,b,c,d,e,f;
	a = 1, b = 2, c = 3, d = 4, e = 5, f = 6;
/*	max(a,b);
	max(c,d);
	max(e,f);
*/
	printf("%d\n",max(a,b));
    printf("%d\n",max(c,d));
	printf("%d\n",max(e,f));
/*
	if(a>b)
		printf("%d\n",a);
	else
		printf("%d\n",b);

	if(a>b)
		printf("%d\n",c);
	else
		printf("%d\n",d);

	if(a>b)
		printf("%d\n",e);
	else
		printf("%d\n",f);
*/
	return 0;
}