#include <stdio.h>

int main(void)
{
	char a[5];
	char j;
	
	scanf("%s", a);
	printf("%s", a);
	
    do
	{
		scanf("%c", &j);
	}while(j != '\n');
	
	printf("%c",j);
	printf("\n«Î ‰»Î");
	scanf("%c", &j);
	printf("%c", j);
	
	
	
	return 0;
}