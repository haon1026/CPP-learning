/*ʱ��:2018-12-13 21:38*/
/*�����ϵĻ���*/
# include <stdio.h>

int main(void)
{
	int a,b,c;

	for(a=1; a<=3; ++a)        //a=1��ʾ����A������X���
		for(b=1; b<=3; ++b)
			for(c=1; c<=3; ++c)
				if(a!=1 && c!=1 && c!=3 && a!=b && b!=c && a!=c)     //a!=1��ʾA����X��飬�������ɲ��ܻ�Ϊ��ż
				{
					printf("%c ���޸� A\n",'X'+a-1);
					printf("%c ���޸� B\n",'X'+b-1);
					printf("%c ���޸� C\n",'X'+c-1);

				}

	return 0;
}