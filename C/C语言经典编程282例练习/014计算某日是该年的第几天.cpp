/*ʱ��:2018-12-13 21:59*/
/*����ĳ���Ǹ���ĵڼ���*/
# include <stdio.h>

int main(void)
{
	int year, month, day;
	int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	int sum = 0;

	printf("������������:\n");
	scanf("%d %d %d", &year, &month, &day);

	for(i=0; i<month-1; ++i)         //ȡǰһ�µ�����     
	{
		sum = sum + months[i];         
	}

	sum = sum + day;

	if( year%4==0 && year%100!=0 || year%400==0 )
		if(month>2)
			sum+=1;

	printf("��%d��\n",sum);

	return 0;
}