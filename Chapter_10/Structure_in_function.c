#include <stdio.h>
struct student
{
	int roll;
	char name[10];	
};
void disp(struct student)
int main()
{
	struct student st;//variable of student
	printf("Enter student Name:\n");
	scanf("%s",st.name);
	printf("Enter student roll:\n");
	scanf("%d",&st.roll);
	disp(st);
}
void disp(struct student stu);
{
	printf("student Name:%s\n",stu.name);
	printf("student Roll:%d\n",stu.roll);
}