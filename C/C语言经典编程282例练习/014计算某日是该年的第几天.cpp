/*时间:2018-12-13 21:59*/
/*计算某日是该年的第几天*/
# include <stdio.h>

int main(void)
{
	int year, month, day;
	int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	int sum = 0;

	printf("请输入年月日:\n");
	scanf("%d %d %d", &year, &month, &day);

	for(i=0; i<month-1; ++i)         //取前一月的天数     
	{
		sum = sum + months[i];         
	}

	sum = sum + day;

	if( year%4==0 && year%100!=0 || year%400==0 )
		if(month>2)
			sum+=1;

	printf("第%d天\n",sum);

	return 0;
}