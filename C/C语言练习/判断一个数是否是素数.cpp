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
		printf("���������������");
	else
		printf("�������������");
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
	printf("������һ����:");
	scanf("%d",&i);
	IsPrime(i);
	return 0;
}

