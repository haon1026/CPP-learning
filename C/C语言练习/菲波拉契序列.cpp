# include <stdio.h>

int main(void)
{
	int n,k;
    int f1=1,f2=2;
	int	f3;

	printf("请输入您需要求的序列：");
	scanf ("%d",&n);
    if (n == 1)
       f3 = 1;
	else if (n == 2)
	   f3 = 2;
	else 
	  for(k=3;k<=n;k++)
	  {	f3 = f1 + f2;
		f1 = f2;
	    f2 = f3;
	  }
	printf("%d\n",f3);
    return 0;
}