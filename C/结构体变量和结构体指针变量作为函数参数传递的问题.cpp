# include <stdio.h>
# include <string.h>

void InputStudent(struct Student *);
void OutputStudent(struct Student);

struct Student
{
	int age;
	char sex;
	char name[100];
};

int main(void)
{
	struct Student st;
	struct Student * pst = &st;

	InputStudent(&st);
	OutputStudent(st);

	return 0;
}

void InputStudent(struct Student * pstu)
{
	pstu->age = 10;
	(*pstu).sex = 'M';
	strcpy(pstu->name, "����");

}

/*
   Output�������͵�ַ���������ݣ�һ����ָ��
   ָ����ŵ㣺���ٵĴ�������  �����ڴ�С ִ���ٶȿ�
   ȱ�㣺����ȫ�����׷������޸�
*/

void OutputStudent(struct Student stu)
{
	printf("%d %c %s", stu.age, stu.sex, stu.name);
}


