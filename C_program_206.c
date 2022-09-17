/*
program 206
27.08.22
read and display a biodata using structure
*/
#include<stdio.h>
main()
{
    struct bio
    {
	char name [20];
	int age ;
	float salary ;
	char address [20];
    };
	struct bio a;
	scanf("%s",a.name);
	scanf("%d",&a.age);
	scanf("%f",&a.salary);
	scanf("%s",a.address);
	printf("Name %s",a.name);
	printf("Age %d",a.age);
	printf("Salary %f",a.salary);
	printf("Address %s",a.address);
}
