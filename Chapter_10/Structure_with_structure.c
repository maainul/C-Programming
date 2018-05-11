#include <stdio.h>
struct student
{
	int roll;
	char name[10];
	struct stu_marks
	{
		char sub[10];
		int m;
		
	}mark;//inner structure contain only marks and subject variable is mark
	
};//outer structure
main()
{
	struct student stu;//outter structure variable is  stu


	printf("Enter first student roll:\n");
	scanf("%d",&stu.roll);
	printf("Enter student name:\n");
	scanf("%s",stu.name);
	printf("Enter subject code:\n");
	scanf("%s",stu.mark.sub);//Outter structure variable.inner structure variable.member of structure
	printf("Enter marks of 5 subjects:\n");
	scanf("%s",stu.mark.m);

	printf("Student details\n");
	printf("Roll: %d\n",stu.roll);
	printf("name: %s\n",stu.name);
	printf("Code: %s\n",stu.mark.sub);
	printf("marks: %d\n",stu.mark.m);

}