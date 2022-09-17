/*
program 213
30.08.22
read and display ten students biodata using integer array
*/
#include<stdio.h>
main()
{
	int i;
	struct bio
	{
		char name[30];
		int age;
		float salary;
		char address[50];
	};
	struct bio a[10];
	for (i=0;i<=9;i++)
	{
		scanf("%s",a[i].name);
		scanf("%d",&a[i].age);
		scanf("%f",&a[i].salary);
		scanf("%s",a[i].address);
    }
    for (i=0;i<=9;i++)
    {
    	printf("Name %s",a[i].name);
	    printf("Age %d",a[i].age);
    	printf("Salary %f",a[i].salary);
    	printf("Address %s",a[i].address);
    }
}
