/*时间:2018-12-11 23:59*/
/*编程求一个整数任意次方后的最后三位数*/

# include <stdio.h>
# include <math.h>

int main(void)
{
	int i,x,y;
	int z = 1;

	printf("请输入两个数，x和y:\n");
	scanf("%d %d",&x,&y);

	for(i=1; i<=y; i++) 
		z = z*x % 1000;                 //计算一个数任意次方的后三位,求一个数的任意次方需考虑结果是否越界,每乘一次都取其后三位,避免产生越界问题同时又不使结果产生误差

	if(z>=100)
	{
		printf("%d^%d的最后三位是:%d\n",x,y,z);
	}
	else
	{
        printf("%d^%d的最后三位是:0%d\n",x,y,z);
	}


	return 0;
}

/*int main(void)
{
	int x,y,t;
	int num = 0;
	int i = 0;

	printf("请输入两个数，x和y:\n");
	scanf("%d %d",&x,&y);
	t = pow(x,y);
	printf("%d\n",t);

	while(t%10)
	{
		++i;

		if(i==1)
		{
			num = t%10;
		}
		else if(i==2)
		{
			num+=t%10*10;
		}
		else if(i==3)
		{
			num+=t%10*100;
		}
		else 
			break;

		t = t/10;

	}
	printf("%d^%d的最后三位是:%d\n",x,y,num);
	return 0;
}
*/
