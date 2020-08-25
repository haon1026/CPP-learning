# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	FILE * fp;
	char ch;

	if( !(fp = fopen("文档2019.txt", "r")) )  //wt+ 文本文件 wb 二进制文件 r
	{
		printf("无法打开文件");
		exit(0);
	}

	while( ch != EOF )
	{
		ch = fgetc(fp);
		putchar(ch);
	}
/*
	ch = fgetc(fp);                  //文本文件已ASCII存储，EOF判断文件结束， 二进制文件以函数feof()判断文件是否结束,结束函数值为1，否则为0，同样也适用于文本文件的读取
	while( ch != EOF )
	{
		putchar(ch);
		ch = fgetc(fp);
	}
*/
	fclose(fp);

	return 0;
}