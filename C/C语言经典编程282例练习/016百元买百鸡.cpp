/*ʱ��:2018-12-13 21:58*/
/*��Ԫ��ټ�����*/
# include <stdio.h>

int main(void)
{
	int cock,hen,chick;
	
	for(cock=0; cock<=20; ++cock)
		for(hen=0; hen<=33; ++hen)
			for(chick=3; chick<=99; ++chick)       //С����Χ3~99,������0~300
				if(cock+hen+chick==100 && 5*cock+3*hen+1.0*chick/3==100 && chick%3==0 ) //С����ӦС��100����3�ı���
				{
					printf("����:%2d ĸ��:%2d С��:%2d\n", cock, hen, chick);
				}

	return 0;
}
