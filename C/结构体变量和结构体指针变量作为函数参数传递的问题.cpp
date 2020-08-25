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
	strcpy(pstu->name, "张三");

}

/*
   Output函数发送地址？发送内容？一般用指针
   指针的优点：快速的传递数据  耗用内存小 执行速度快
   缺点：不安全，容易发生误修改
*/

void OutputStudent(struct Student stu)
{
	printf("%d %c %s", stu.age, stu.sex, stu.name);
}


