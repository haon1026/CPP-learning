# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	FILE * fp;
	char ch;
	char filename[20];
	
	printf("�������ļ���:");
	scanf("%s", filename);

	if( !(fp = fopen(filename, "wt+")) )  //wt+ �ı��ļ� wb �������ļ� r
	{
		printf("�޷����ļ�");
		exit(0);
	}

	printf("������Ҫд���ļ��ľ���:");
	ch = getchar();
	ch = getchar();

	while( ch != EOF )
	{
		fputc(ch, fp);
		ch = getchar();
	}

	fclose(fp);

	return 0;
}