# include <stdio.h>

struct Student     //定义一个数据类型
{
	int age;
	float score;
	char sex;
};

int main(void)
{
	struct Student st = {20, 60.5, 'M'};
	struct Student st2;
	st2.age = 19;
	st2.score = 70;
	st2.sex = 'M';

	printf("%d %f %c \n", st.age, st.score, st.sex);
    printf("%d %f %c \n", st2.age, st2.score, st2.sex);

	/* 
    int age;
	float score;
	char sex;
    int age2;
	float score2;
	char sex2;
	*/

	return 0;
}