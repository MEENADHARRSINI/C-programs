/*
program 23
29.10.22
read and display biodata using private and public access specifier
*/
#include<iostream>
using namespace std;
typedef struct bio
{
	private:
		char name[20];
		int age;
		float salary;
		char address[50];
	public:
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
