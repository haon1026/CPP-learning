# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	FILE * fp;
	char ch;

	if( !(fp = fopen("�ĵ�2019.txt", "r")) )  //wt+ �ı��ļ� wb �������ļ� r
	{
		printf("�޷����ļ�");
		exit(0);
	}

	while( ch != EOF )
	{
		ch = fgetc(fp);
		putchar(ch);
	}
/*
	ch = fgetc(fp);                  //�ı��ļ���ASCII�洢��EOF�ж��ļ������� �������ļ��Ժ���feof()�ж��ļ��Ƿ����,��������ֵΪ1������Ϊ0��ͬ��Ҳ�������ı��ļ��Ķ�ȡ
	while( ch != EOF )
	{
		putchar(ch);
		ch = fgetc(fp);
	}
*/
	fclose(fp);

	return 0;
}