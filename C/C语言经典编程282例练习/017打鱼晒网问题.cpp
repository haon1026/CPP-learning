/*时间:2018-12-14 22:32*/
/*打渔晒网问题*/
# include <stdio.h>

bool leap(int year)
{
	if(year%4==0 && year%100!=0 || year%400==0)
		return 1;
	else
		return 0;
}

int num(int year, int month, int day )
{
	int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int i,j;
	int sum = 0;

	for(i=1; i<month; ++i)
		sum+= months[i-1];

	for(j=2011; j<year; ++j)     //2011年到输入的年份差多少天
	{
		if(leap(j))
			sum+=366;
		else
			sum+=365;
	}
	sum = sum + day;

	if( leap(year) && month>2 )
		sum+= 1;
	printf("第%d天",sum);

	return sum;
}

int main(void)
{
	int year, month, day, n;
	
	printf("请输入年月日\n");
	scanf("%d %d %d", &year, &month, &day);

	n = num(year, month, day);

	if( (n%5)<4 && (n%5)>0 )        //每三天打一次渔,两天晒一次网，五天一个周期，余数1.2.3为打渔，否则在晒网
		printf("%d %d %d 打渔\n", year, month, day);
	else
		printf("%d %d %d 晒网\n", year, month, day);


	return 0;
}
