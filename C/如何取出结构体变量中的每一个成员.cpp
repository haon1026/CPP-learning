# include <stdio.h>

struct Student
{
	int age;
	float score;
	char sex;
};

int main(void)
{
	struct Student st = {20, 80, 'F'};
	//st.age = 25;
	struct Student * pst = &st;

	pst->age = 25;     //计算机内部转化为(*pst).age
	st.score = 62.6f;

	printf("%d %f %c\n", st.age, pst->score, st.sex);


	return 0;
} 