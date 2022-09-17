/*
program 215
01.09.22
read and display the biodata using typedef
*/
#include<stdio.h>
main()
{
	typedef struct bio
	{
		char name[20];
		int age;
		float salary;
		char address[20];
	}BIO;
	BIO a;
	scanf("%s",a.name);
	scanf("%d",&a.age);
	scanf("%f",&a.salary);
	scanf("%s",a.address);
	printf("Name %s",a.name);
	printf("Age %d",a.age);
	printf("Salary %f",a.salary);
	printf("Address %s",a.address);
}
