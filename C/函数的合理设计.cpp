/*
    	时间：2019/11/15
		求1到某个数字之间的所有素数，并将其输出
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
	printf("请输入一个数:");
    scanf("%d",&val);
	for (k=2; k<=val; k++)
	{
			if(IsPrime(k))
				printf("%d ",k);
	
	}
	return 0;
}
