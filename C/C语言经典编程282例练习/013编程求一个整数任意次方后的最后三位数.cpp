/*ʱ��:2018-12-11 23:59*/
/*�����һ����������η���������λ��*/

# include <stdio.h>
# include <math.h>

int main(void)
{
	int i,x,y;
	int z = 1;

	printf("��������������x��y:\n");
	scanf("%d %d",&x,&y);

	for(i=1; i<=y; i++) 
		z = z*x % 1000;                 //����һ��������η��ĺ���λ,��һ����������η��迼�ǽ���Ƿ�Խ��,ÿ��һ�ζ�ȡ�����λ,�������Խ������ͬʱ�ֲ�ʹ����������

	if(z>=100)
	{
		printf("%d^%d�������λ��:%d\n",x,y,z);
	}
	else
	{
        printf("%d^%d�������λ��:0%d\n",x,y,z);
	}


	return 0;
}

/*int main(void)
{
	int x,y,t;
	int num = 0;
	int i = 0;

	printf("��������������x��y:\n");
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
	printf("%d^%d�������λ��:%d\n",x,y,num);
	return 0;
}
*/
