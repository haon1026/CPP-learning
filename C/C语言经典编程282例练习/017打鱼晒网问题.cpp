/*ʱ��:2018-12-14 22:32*/
/*����ɹ������*/
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

	for(j=2011; j<year; ++j)     //2011�굽�������ݲ������
	{
		if(leap(j))
			sum+=366;
		else
			sum+=365;
	}
	sum = sum + day;

	if( leap(year) && month>2 )
		sum+= 1;
	printf("��%d��",sum);

	return sum;
}

int main(void)
{
	int year, month, day, n;
	
	printf("������������\n");
	scanf("%d %d %d", &year, &month, &day);

	n = num(year, month, day);

	if( (n%5)<4 && (n%5)>0 )        //ÿ�����һ����,����ɹһ����������һ�����ڣ�����1.2.3Ϊ���棬������ɹ��
		printf("%d %d %d ����\n", year, month, day);
	else
		printf("%d %d %d ɹ��\n", year, month, day);


	return 0;
}
