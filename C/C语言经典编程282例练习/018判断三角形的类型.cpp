/*ʱ��:2018-12-19 22:37*/
/*�ж������ε�����*/
# include <stdio.h>
# include <math.h>

bool judge_triangle(float x, float y, float z)
{
	if(x+y>z && x+z>y && y+z>x)
		return 1;
	else
		return 0;
}

void judge_type(float x, float y, float z)
{
	int i, j;
	float t;
	float n[3]={x, y, z};

	for(i=0; i<2; ++i)
		for(j=0; j<2-i; ++j)
			if(n[j] > n[j+1])
			{
				t = n[j+1];
				n[j+1] = n[j];
				n[j] = t;
			}
	x = n[0];
	y = n[1];
	z = n[2];
	printf("%f %f %f",x,y,z);
	
	if(x*x+y*y > z*z)                         //���Ƿֳɵȱ������Σ����������Σ�ֱ�������Σ���ͨ������
		printf("�������������������\n");
	else if(x*x+y*y == z*z)
		printf("����������ֱ��������\n");
	else
		printf("���������Ƕ۽�������\n");

	return;
	
}

int main(void)
{
	float a, b, c;
	float s, area;

	printf("�����������ε������ߵĳ���:");
	scanf("%f %f %f", &a, &b, &c);

	if( judge_triangle(a, b, c) )
	{
		printf("���������������������\n");
		judge_type(a, b, c);
		s = (a+b+c)/2;
		area = (float)sqrt( s*(s-a)*(s-b)*(s-c) );
		printf("����ǣ�%f\n", area);

	}
	else
		printf("���������߲������������\n");



	return 0;
}
