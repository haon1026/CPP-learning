/*时间:2018-12-13 21:58*/
/*百元买百鸡问题*/
# include <stdio.h>

int main(void)
{
	int cock,hen,chick;
	
	for(cock=0; cock<=20; ++cock)
		for(hen=0; hen<=33; ++hen)
			for(chick=3; chick<=99; ++chick)       //小鸡范围3~99,而不是0~300
				if(cock+hen+chick==100 && 5*cock+3*hen+1.0*chick/3==100 && chick%3==0 ) //小鸡数应小于100且是3的倍数
				{
					printf("公鸡:%2d 母鸡:%2d 小鸡:%2d\n", cock, hen, chick);
				}

	return 0;
}
