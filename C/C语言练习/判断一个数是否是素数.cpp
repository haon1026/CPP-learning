# include<stdio.h>

void IsPrime(int j)
{
	int k,m=0;
	for(k=2 ;k<j; k++)
	{
		if(j%k == 0)
			m++;
	}
	if(m>0)
		printf("输入的数不是素数");
	else
		printf("输入的数是素数");
		/*
		for(k=2; k<j; k++)
		{
		if(j%k == 0)
		break;
		}
		if(k == j)
		printf("Yes!\n");
		else
		printf("NO!\n");
		
	*/	
}

int main(void)
{
	int i;
	printf("请输入一个数:");
	scanf("%d",&i);
	IsPrime(i);
	return 0;
}

