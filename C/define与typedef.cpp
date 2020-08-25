# include <stdio.h>
# define PIN1 char*

typedef char* PIN2;

int main(void)
{
	PIN1 x, y;        //char *x, char y;
	PIN2 a, b;        //char * a; char *b;

	printf("define: %d, %d\n", sizeof(x), sizeof(y) );         
	printf("typedef: %d, %d\n", sizeof(a), sizeof(b) );

	return 0;
}