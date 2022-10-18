/*
program 329
12.10.22
read and display a biodata
*/
#include<stdio.h>
main()
{
	typedef struct bio
	{
		char name[30];
		int age;
		float salary;
		char address[30];
	}Bio;
	int n;
	Bio *pa,*ps;
	scanf("%d",&n);
	ps=pa=(Bio *)malloc(n*sizeof(Bio));
	scanf("%s",pa->name);
	scanf("%d",&pa->age);
	scanf("%f",&pa->salary);
	scanf("%s",pa->address);
	printf("Name %s",pa->name);
	printf("Age %d",pa->age);
	printf("Salary %f",pa->salary);
	printf("Address %s",pa->address);
	free(ps);
}
