# include <stdio.h>
# include <math.h>

int main (void)
{  
	float a,b,c;
	float x1,x2;
	float delta;
	char ch;
    do
	{	
		printf("请输入一元二次方程的三个常数\n");
		printf("a = ");
		scanf ("%f",&a);
		
		printf("b = ");
		scanf ("%f",&b);
		
		printf("c = ");
		scanf ("%f",&c);
		
		delta = (b*b) - (4*a*c);
		printf("delta=%f\n",delta);
		
		if(delta > 0)   
		{    
			x1 = (-b + sqrt(delta))/(2*a);
			x2 = (-b - sqrt(delta))/(2*a);
			printf("有两个不同解，x1 = %f,x2 = %f\n",x1,x2);
		}
		
		else if(delta == 0)
		{
			x1 = x2 =(-b)/(2*a);
			printf("有唯一一个解，x1 = x2 = %f\n",x1,x2);
		}
		
		else 
			printf("方程没有实数解\n");

		printf("是否继续输入,Y/N?:");
		scanf(" %c",&ch);	
	}while(ch == 'Y' || ch == 'y');

	return 0;
}
