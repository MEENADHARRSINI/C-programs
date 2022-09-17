/*
program 214
01.09.22
read and display the biodata using user defined structure
*/
#include<stdio.h>
main()
{
	struct bio
	{
		char name[20];
		int age;
		float salary;
		char address[20];
	};
	typedef struct bio Bio;
	Bio a;
	scanf("%s",a.name);
	scanf("%d",&a.age);
	scanf("%f",&a.salary);
	scanf("%s",a.address);
	printf("Name %s",a.name);
	printf("Age %d",a.age);
	printf("Salary %f",a.salary);
	printf("Address %s",a.address);
}
