# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	FILE * fp;
	char ch;
	char filename[20];
	
	printf("请输入文件名:");
	scanf("%s", filename);

	if( !(fp = fopen(filename, "wt+")) )  //wt+ 文本文件 wb 二进制文件 r
	{
		printf("无法打开文件");
		exit(0);
	}

	printf("请输入要写入文件的句子:");
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