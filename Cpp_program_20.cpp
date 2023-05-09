/*
program 20
28.10.22
read and display a biodata using scope resolution operator
*/
#include<iostream>
using namespace std;
typedef struct bio
{
	char name[20];
	int age;
	float salary;
	char address[40];
	void read();
	void display();
}BIO;
void BIO::read()
{
	cin>>name>>age>>salary>>address;
}
void BIO::display()
{
	cout<<name<<age<<salary<<address;
}
main()
{
	BIO b;
	b.read();
	b.display();
}
