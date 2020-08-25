# include <stdio.h>

int main (void)
{
    int a[3][4] = {
		{1, 2, 13, 4},
		{4, 15, 6, 7},
		{1, 4, 2, 15}
	};
	int i, j;
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<4; j++)
			printf("%-2d ", a[i][j]);
		
		printf("\n");
	}
	
	
	return 0;
}