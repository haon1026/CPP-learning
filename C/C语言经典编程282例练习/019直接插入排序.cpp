/*时间:2018-12-23 13:16*/
/*直接插入排序*/
# include <stdio.h>

void sort(int *s , int n)    //int s[]
{
	int i,j;

	for(i=2; i<n; ++i)
	{
		*s = *(s+i);//s[0] = s[i];       //第i项的数依次与之前的数进行比较,
		j = i - 1;

		while(s[0] < s[j])
		{
			s[j+1] = s[j];
			j--;
		}
		s[j+1] = s[0];            //在确定的位置插入s[i]即s[0]
	}

	return;
}


int main(void)
{
	int i;
	int a[11];

	printf("请输入10个数据：\n");
	for(i=1; i<=10; ++i)
	{
		scanf("%d", &a[i]);
	}

	printf("原始顺序：\n");
	for(i=1; i<=10; ++i)
	{
		printf("%3d",a[i]);
	}

	sort(a,11);

	printf("\n插入数据排序后顺序：\n");
	for(i=1; i<=10; ++i)
	{
		printf("%3d",a[i]);
	}
	
	return 0;
}