# include <stdio.h>

int main(void)
{
	int i = 3;
	int j = 5;
	int k;

	k = i & j;
	printf("%d\n",k);

	k = i | j;
	printf("%d\n",k);

	k = ~j;            //变量的二进制位取反
	printf("%d\n",k);

	k = i ^ j;        //按位异或，相同为0，不同为1
	printf("%d\n",k);

	k = i<<1;         //i 的所有二进制位左移一位，左移N位相当于乘以2的N次方
	printf("%d\n",k);  

	k = i>>2;         //i 的所有二进制位右移一位，右移N位相当于除以2的N次方，前提是数据不能丢失
	printf("%d\n",k);  
	
	return 0;
}


