/*
program 212
30.08.22
read and display a biodata using structure along with date of birth
*/
#include<stdio.h>
main()
{
	struct date
	{
		int date;
		char day[10];
		char month[10];
		int year;
	};
	struct add
	{
		char street[20];
		char city[20];
		int pin;
	};
	struct bio
	{
		char name[30];
		int age;
		float salary;
		struct add x;
		struct date y;
	};
	struct bio a;
	scanf("%s",a.name);
	scanf("%d",&a.age);
	scanf("%f",&a.salary);
	struct add x;
	scanf("%s",a.x.street);
	scanf("%s",a.x.city);
	scanf("%d",&a.x.pin);
	struct date y;
	scanf("%d",&a.y.date);
	scanf("%s",a.y.day);
	scanf("%s",a.y.month);
	scanf("%d",&a.y.year);
	printf("Name %s",a.name);
	printf("Age %d",a.age);
	printf("Salary %f",a.salary);
	printf("Street %s",a.x.street);
	printf("City %s",a.x.city);
	printf("Pin %d",a.x.pin);
	printf("Date %d",a.y.date);
	printf("Day %s",a.y.day);
	printf("Month %s",a.y.month);
	printf("Year %d",a.y.year);
}
