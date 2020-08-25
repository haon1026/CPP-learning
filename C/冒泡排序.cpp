# include <stdio.h>

void sort(int *pArr, int len)
{
	int k;
	int t;
	int j;
    for(j=0; j<len-1; ++j)   //for(j=len-1; j>0; --j)     k<len
	{   for(k=0; k<len-1-j; ++k)
	       if( pArr[k] > pArr[k+1] )
		   {
		      t = pArr[k+1];
		      pArr[k+1] = pArr[k];
		      pArr[k] = t;
		   }
	
	}	    
	
	
}

int main(void)
{
	int a[6] = {10, 2, 8, -8, 11, 0};
	int i;
	
	sort(a, 6);
	for(i=0; i<6; ++i)
		printf("%d ",a[i]);
	printf("\n");
	
	
	return 0;
}