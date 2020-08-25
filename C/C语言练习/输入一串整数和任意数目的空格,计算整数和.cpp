# include <stdio.h>
# include <string.h>

//时间:2019-03-05
//输入一串整数和任意数目的空格,计算整数和
int main(void)
{
	int val = 0, sum = 0;   
	char ch;

	printf("请输入一串整数和任意数目的空格:");

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

	printf("请输入一串整数和任意空格：");

	while(scanf("%d",&i) == 1)          //scanf获取一个数,遇到空格结束，获取成功为函数为1，获取非数字字符函数为0
	{
		sum += i;
		while( (ch=getchar()) == ' ' )   //消耗空格
			;
		if(ch == '\n')                   //结束判断
			break;
		ungetc( ch, stdin );             //将变量ch中存放的字符退回给stdin输入流
	}
	printf("%d", sum);
}
*/


