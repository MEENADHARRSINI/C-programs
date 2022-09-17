/*
program 211
30.08.22
read and display a biodata using structure within structure
*/
#include<stdio.h>
main()
{
	struct add
	{
		char street[20];
		char city[10];
		int pin;
	};
	struct bio
	{
		char name[20];
		int age;
		float salary;
		struct add y;
	};
	struct bio a;
	scanf("%s",a.name);
	scanf("%d",&a.age);
	scanf("%f",&a.salary);
	struct add y;
	scanf("%s",a.y.street);
	scanf("%s",a.y.city);
	scanf("%d",&a.y.pin);
	printf("Name %s",a.name);
	printf("Age %d",a.age);
	printf("Salary %f",a.salary);
	printf("Street %s",a.y.street);
	printf("City %s",a.y.city);
	printf("Pin %d",a.y.pin);
}
