/*
    	ʱ�䣺2019/11/15
		��1��ĳ������֮����������������������
*/


# include <stdio.h>

bool IsPrime(int m)
{
	int i;
	for (i = 2; i<m; i++)
	{
		if (0 == m%i)
			break;
	}
	if (i == m)
		return true;
	else
		return false;
}

int main(void)
{
	int val,k;
	printf("������һ����:");
    scanf("%d",&val);
	for (k=2; k<=val; k++)
	{
			if(IsPrime(k))
				printf("%d ",k);
	
	}
	return 0;
}
