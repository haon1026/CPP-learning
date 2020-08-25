# include <stdio.h>

int main (void)
{
	int a[5] = {1,2,3,4,5};
	int b[5];
	int i,k=0;
	for (i=4;i>=0;i--)
	{
		b[k] = a[i];
		k++;
	}
	for (i=0;i<5;i++)
	{
		a[i] = b[i];
		printf("%d ",a[i]);
	}

    return 0;
}