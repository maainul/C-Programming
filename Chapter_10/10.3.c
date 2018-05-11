#include <stdio.h>
struct class
{
	int number;
	char name[20];
	float marks;
};
main()
{
	int x;
	struct class student1={111,"Rao",72.50};
	struct class student2={222,"jao",67.00};
	struct class student3;
	student3=student2;
	x=((student3.number==student2.number)&&(student3.marks==student2.marks))?1:0;
	if(x==1)
	{
		printf("\n student3 and student2 are same\n");
		printf("%d %s %f\n",student3.number,student3.name,student3.marks);
	}
	else
		printf("They are diffrent\n");
}

