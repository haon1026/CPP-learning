# include <stdio.h>
# include <malloc.h>

int main(void)
{
	int a[50];
	int len;
	int * pArr;
	int i;

	//��̬�Ĺ���һά����
	printf("��������Ҫ��ŵ�Ԫ�صĸ���:");
	scanf("%d", &len);
	pArr = (int *)malloc(4 * len);             //��̬�Ĺ�����һ��һά���飬int pArr[len]
    //realloc(pArr,100);    //�������������������� 

    //��һά������в���
	for(i=0; i<len; ++i)
	{
		scanf("%d", &pArr[i]);
	}

	//��һά����������
	printf("һά�����������:\n");
	for(i=0; i<len; ++i)
	{
		printf("%d\n", pArr[i]);
	}

	//free(pArr);           //�ͷŵ���̬���������
	//printf("%d", pArr[0]);


	return 0;
}