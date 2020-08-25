# include <stdio.h>

typedef struct Student
{
	int sid;
	char name[100];
	char sex;
}*PSTU, STU;

int main(void)
{
	STU st;    //struct Student st;
	PSTU ps = &st;   //struct Student *st = &st;
	ps->sid = 10;
	printf("%d\n", ps->sid);

	return 0;
}