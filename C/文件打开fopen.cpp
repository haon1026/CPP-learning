/*ʱ��:2019-02-05*/

# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	FILE *fp;

	if( fp = fopen("�ļ�.txt", "w") )  //����д��׷��
	{
		printf("�򿪳ɹ�\n");
	}
	else
	{
		printf("�޷����ļ�");
		system("pause");
	}

	return 0;
}