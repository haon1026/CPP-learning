/*ʱ��:2018-12-23 13:16*/
/*ֱ�Ӳ�������*/
# include <stdio.h>

void sort(int *s , int n)    //int s[]
{
	int i,j;

	for(i=2; i<n; ++i)
	{
		*s = *(s+i);//s[0] = s[i];       //��i�����������֮ǰ�������бȽ�,
		j = i - 1;

		while(s[0] < s[j])
		{
			s[j+1] = s[j];
			j--;
		}
		s[j+1] = s[0];            //��ȷ����λ�ò���s[i]��s[0]
	}

	return;
}


int main(void)
{
	int i;
	int a[11];

	printf("������10�����ݣ�\n");
	for(i=1; i<=10; ++i)
	{
		scanf("%d", &a[i]);
	}

	printf("ԭʼ˳��\n");
	for(i=1; i<=10; ++i)
	{
		printf("%3d",a[i]);
	}

	sort(a,11);

	printf("\n�������������˳��\n");
	for(i=1; i<=10; ++i)
	{
		printf("%3d",a[i]);
	}
	
	return 0;
}