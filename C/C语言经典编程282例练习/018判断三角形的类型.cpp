/*时间:2018-12-19 22:37*/
/*判断三角形的类型*/
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
	
	if(x*x+y*y > z*z)                         //答案是分成等边三角形，等腰三角形，直角三角形，普通三角形
		printf("该三角形是锐角三角形\n");
	else if(x*x+y*y == z*z)
		printf("该三角形是直角三角形\n");
	else
		printf("该三角形是钝角三角形\n");

	return;
	
}

int main(void)
{
	float a, b, c;
	float s, area;

	printf("请输入三角形的三条边的长度:");
	scanf("%f %f %f", &a, &b, &c);

	if( judge_triangle(a, b, c) )
	{
		printf("所给三条边能组成三角形\n");
		judge_type(a, b, c);
		s = (a+b+c)/2;
		area = (float)sqrt( s*(s-a)*(s-b)*(s-c) );
		printf("面积是：%f\n", area);

	}
	else
		printf("所给三条边不能组成三角形\n");



	return 0;
}
