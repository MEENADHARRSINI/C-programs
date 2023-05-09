/*
program 324
12.10.22
read and display a biodata using functions and struture pointers
*/
#include<stdio.h>

typedef struct bio
{
	char name [20];
	int age;
	float salary;
	char address [30];
}Bio;
Bio fnread(Bio *pa);
Bio fndisplay(Bio *pa);
main()
{
	Bio a;
	fnread(&a);
	fndisplay(&a);
}
Bio fnread(Bio *pa)
{
	scanf("%s",pa->name);
	scanf("%d",&pa->age);
	scanf("%f",&pa->salary);
	scanf("%s",pa->address);
}
Bio fndisplay(Bio *pa)
{
	printf("Name %s",pa->name);
	printf("Age %d",pa->age);
	printf("Salary %f",pa->salary);
	printf("Address %s",pa->address);
}
