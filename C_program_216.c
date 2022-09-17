/*
program 216
01.09.22
read and display a biodata using user defined datatype along with DOB, address
*/
#include<stdio.h>
main()
{
	typedef struct date
	{
		int date;
		char day[10];
		char month [20];
		int year;
	}DATE;
	typedef struct address
	{
		char street[20];
		char city[10];
		int pin;
	}ADDRESS;
	typedef struct bio
	{
		char name[20];
		int age;
		float salary;
		DATE x;
		ADDRESS y;
	}BIO;
	BIO a;
	scanf("%s",a.name);
	scanf("%d",&a.age);
	scanf("%f",&a.salary);
    ADDRESS y;
	scanf("%s",a.y.street);
	scanf("%s",a.y.city);
	scanf("%d",&a.y.pin);
    DATE x;
	scanf("%d",&a.x.date);
	scanf("%s",a.x.day);
	scanf("%s",a.x.month);
	scanf("%d",&a.x.year);
	printf("Name %s",a.name);
	printf("Age %d",a.age);
	printf("Salary %f",a.salary);
	printf("Street %s",a.y.street);
	printf("City %s",a.y.city);
	printf("Pin %d",a.y.pin);
	printf("Date %d",a.x.date);
	printf("Day %s",a.x.day);
	printf("Month %s",a.x.month);
	printf("Year %d",a.x.year);
}
