# include <stdio.h>
# include <malloc.h>

struct Student
{
	int age;
	char name[100];
	float score;
};

void InputStudent(struct Student * pArr, int len);
void OutputStudent(struct Student * q, int len);

int main(void)
{
	int len;
	struct Student *p;

	printf("请输入学生的个数:\n");
	printf("len = ");
	scanf("%d",&len);
	p = (struct Student *)malloc( len * sizeof(struct Student) );

	InputStudent(p, len);
	OutputStudent(p,len);

	return 0;
}

void InputStudent(struct Student * pArr, int len)
{
	int i;

	for(i=0; i<len; ++i)
	{
		printf("请输入第%d个学生的信息:\n", i+1);
		printf("age = ");
		scanf("%d", &pArr[i].age);    //&(pArr+i)->age    or &(*(pArr+i)).age   or  &pArr[i].age

        printf("name = ");
		scanf("%s", pArr[i].name);

		printf("score = ");
		scanf("%f", &pArr[i].score);         
	}
	
}

void OutputStudent(struct Student *q, int len)
{
	int m,j,k,n;
	struct Student t;
	n = len;

	for(k=0; k<len-1; ++k)
	{
		for(j=0; j<len-1-k; ++j)
		{
			if(q[j].score < q[j+1].score)
			{
				t = q[j+1];
				q[j+1] = q[j];
				q[j] = t;
			}
       
		}
	}
	printf("\n\n\n");
	for(m=0; m<n; ++m)
	{
		printf("排名第%d的同学信息\n", m+1);
		printf("age = %d\n", q[m].age);
		printf("name = %s\n", q[m].name);
		printf("score = %f\n", q[m].score);
	}
}