/*时间:2019-02-05*/

# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	FILE *fp;

	if( fp = fopen("文件.txt", "w") )  //读，写，追加
	{
		printf("打开成功\n");
	}
	else
	{
		printf("无法打开文件");
		system("pause");
	}

	return 0;
}