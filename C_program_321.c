/*
program 321
11.10.22
read abd display a biodata
*/
#include<stdio.h>
main()
{
	typedef struct bio
	{
		char name[20];
		int age;
		float salary;
		char address[30];
	}Bio;
	Bio a,*pa;
	pa=&a;
	scanf("%s",pa->name);
	scanf("%d",& pa->age);
	scanf("%f",& pa->salary);
	scanf("%s",pa->address);
	printf("Name %s",pa->name);
	printf("Age %d",pa->age);
	printf("Salary %f",pa->salary);
	printf("Address %s",pa->address);
}
