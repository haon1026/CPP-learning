# include <stdio.h>
# include <string.h>

//ʱ��:2019-03-05
//����һ��������������Ŀ�Ŀո�,����������
int main(void)
{
	int val = 0, sum = 0;   
	char ch;

	printf("������һ��������������Ŀ�Ŀո�:");

	while((ch = getchar()) != '\n')      
	{
		if(ch == ' ')                       
		{
			sum += val;                    
			val = 0;                      
			continue;
		}
		val = val*10 + (ch - '0');
	}
	sum += val;
	printf("%d\n", sum);


	return 0;
}
/*
{
	int i;
	int sum=0;
	char ch;

	printf("������һ������������ո�");

	while(scanf("%d",&i) == 1)          //scanf��ȡһ����,�����ո��������ȡ�ɹ�Ϊ����Ϊ1����ȡ�������ַ�����Ϊ0
	{
		sum += i;
		while( (ch=getchar()) == ' ' )   //���Ŀո�
			;
		if(ch == '\n')                   //�����ж�
			break;
		ungetc( ch, stdin );             //������ch�д�ŵ��ַ��˻ظ�stdin������
	}
	printf("%d", sum);
}
*/


