#include <stdio.h>
struct student
{
	char name[20];
	int roll;
	int marks[5];
};
main()
{
	struct student stu;
	struct student stu1;

	int i,sum=0;
/*...First student information.....*/
	printf("Enter student name:\n");
	scanf("%s",stu.name);
	printf("Enter first student roll:\n");
	scanf("%d",&stu.roll);
	printf("Enter marks of 5 subjects:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&stu.marks[i]);
		sum+=stu.marks[i];
	}

/*...First student information.....*/
	printf("First student name:%s\n",stu.name);
	printf("First student roll:%d\n",stu.roll);
	for(i=0;i<5;i++)
	{
		printf(" Marks of 5 subjects:%d\n",stu.marks[i]);
	}
	printf("Totals=%d\n",sum);
    sum=0;
	/*...First student information.....*/
	printf("Enter student name:\n");
	scanf("%s",stu1.name);
	printf("Enter first student roll:\n");
	scanf("%d",&stu1.roll);
	printf("Enter marks of 5 subjects:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&stu1.marks[i]);
		sum+=stu1.marks[i];
	}

/*...First student information.....*/
	printf("First student name:%s\n",stu1.name);
	printf("First student roll:%d\n",stu1.roll);
	for(i=0;i<5;i++)
	{
		printf(" Marks of 5 subjects:%d\n",stu1.marks[i]);
	}
	printf("Totals=%d\n",sum);
}
