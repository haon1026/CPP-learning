/*时间:2018-12-13 21:38*/
/*婚礼上的谎言*/
# include <stdio.h>

int main(void)
{
	int a,b,c;

	for(a=1; a<=3; ++a)        //a=1表示新郎A与新娘X结婚
		for(b=1; b<=3; ++b)
			for(c=1; c<=3; ++c)
				if(a!=1 && c!=1 && c!=3 && a!=b && b!=c && a!=c)     //a!=1表示A不与X结婚，三个新郎不能互为配偶
				{
					printf("%c 将嫁给 A\n",'X'+a-1);
					printf("%c 将嫁给 B\n",'X'+b-1);
					printf("%c 将嫁给 C\n",'X'+c-1);

				}

	return 0;
}