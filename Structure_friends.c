#include<stdio.h>
struct friends
{
	char name[20];
	int phonenuber;
	char address[30];
};
struct friends mamun;
struct friends kamrul;
struct friends fakhrul;
struct friends abdullah;
struct friends sobuj;
main()
{
	struct friends mamun={"Mahfujur Rahman Mamun",123,"Surtarango Road"};
	struct friends kamrul={"Md.Kamrul Hasan",123,"Auchpara"};
	struct friends fakhrul={"Md.Fakhrul Islam",123,"Manikganj"};
	struct friends abdullah={"C M Abdullah Khan",123,"Baridhra"};
	struct friends sobuj={"Mahbubur Rahman Mamun",123,"Muktarbari"};

	printf("Mamun:\n");
	printf("Name:          %s\n",mamun.name);
	printf("PhoneNumber:   %d\n",mamun.phonenuber);
	printf("Address:       %s\n",mamun.address);

	printf("Kamrul:\n");
	printf("Name:          %s\n",kamrul.name);
	printf("PhoneNumber:   %d\n",kamrul.phonenuber);
	printf("Address:       %s\n",kamrul.address);

	printf("Fakhrul:\n");
	printf("Name:          %s\n",fakhrul.name);
	printf("PhoneNumber:   %d\n",fakhrul.phonenuber);
	printf("Address:       %s\n",fakhrul.address);

	printf("Abdullah:\n");
	printf("Name:  		   %s\n",abdullah.name);
	printf("PhoneNumber:   %d\n",abdullah.phonenuber);
	printf("Address:       %s\n",abdullah.address);

	printf("Sobuj:\n");
	printf("Name:  		   %s\n",sobuj.name);
	printf("PhoneNumber:   %d\n",sobuj.phonenuber);
	printf("Address:       %s\n",sobuj.address);


}

