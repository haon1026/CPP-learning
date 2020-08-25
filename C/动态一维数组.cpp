# include <stdio.h>
# include <malloc.h>

int main(void)
{
	int a[50];
	int len;
	int * pArr;
	int i;

	//动态的构造一维数组
	printf("请输入你要存放的元素的个数:");
	scanf("%d", &len);
	pArr = (int *)malloc(4 * len);             //动态的构造了一个一维数组，int pArr[len]
    //realloc(pArr,100);    //对数组进行扩充或者缩减 

    //对一维数组进行操作
	for(i=0; i<len; ++i)
	{
		scanf("%d", &pArr[i]);
	}

	//对一维数组进行输出
	printf("一维数组的内容是:\n");
	for(i=0; i<len; ++i)
	{
		printf("%d\n", pArr[i]);
	}

	//free(pArr);           //释放掉动态分配的数组
	//printf("%d", pArr[0]);


	return 0;
}