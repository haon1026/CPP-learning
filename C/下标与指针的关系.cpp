# include <stdio.h>

int main(void)
{
	int a[5];
	
	printf("%d\n", a[0]);

	int b[5] = {1,2,3};
	printf("%d, %d\n", b[1],b[4]);

	int c[5] = {1,2,3,4,5};
	printf("%d\n", c);
	printf("%d\n", &c[0]);

	printf("%d\n", *c);
	printf("%d\n", c[0]);
	printf("%d\n", *(c+3) );

	if ( c[2] == *(c+2) )
		printf("Yes\n");
	else
	    printf("No\n");
 
	return 0;
}