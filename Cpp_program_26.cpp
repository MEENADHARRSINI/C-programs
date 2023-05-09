/*
program 26
29.10.22
read and display a biodata using class
*/
#include<iostream>
using namespace std;
class Bio
{
	private:
		char name[20];
		int age;
		float salary;
		char address[50];
	public:
		void read();
		void display();
};
void Bio ::read()
{
	cin>>name>>age>>salary>>address;
}
void Bio ::display()
{
	cout<<name<<age<<salary<<address;
}
main()
{
	Bio b;
	b.read();
	b.display();
}
