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

	k = ~j;            //�����Ķ�����λȡ��
	printf("%d\n",k);

	k = i ^ j;        //��λ�����ͬΪ0����ͬΪ1
	printf("%d\n",k);

	k = i<<1;         //i �����ж�����λ����һλ������Nλ�൱�ڳ���2��N�η�
	printf("%d\n",k);  

	k = i>>2;         //i �����ж�����λ����һλ������Nλ�൱�ڳ���2��N�η���ǰ�������ݲ��ܶ�ʧ
	printf("%d\n",k);  
	
	return 0;
}


