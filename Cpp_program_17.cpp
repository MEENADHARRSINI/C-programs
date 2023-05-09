/*
program 324
12.10.22
read and display a biodata using functions and struture pointers
*/
#include<iostream>
using namespace std;
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
	cin>>pa->name;
	cin>>pa->age;
	cin>>pa->salary;
	cin>>pa->address;
}
Bio fndisplay(Bio *pa)
{
	cout<<"Name:"<<pa->name;
	printf("\n");
	cout<<"Age:"<<pa->age;
	printf("\n");
	cout<<"Salary:"<<pa->salary;
	printf("\n");
	cout<<"Address:"<<pa->address;
}
