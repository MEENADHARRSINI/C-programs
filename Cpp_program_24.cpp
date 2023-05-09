/*
program 24
29.10.22
area of circle using private and public access specifier
*/
#include<iostream>
using namespace std;
typedef struct area
{
	private:
		float radius,area;
	public:
		void read();
		void find();
		void display();
}AREA;
void AREA::read()
{
	cin>>radius;
}
void AREA::find()
{
	area=3.14*radius*radius;
}
void AREA::display()
{
	cout<<"Area of circle="<<area;
}
main()
{
	AREA a;
	a.read();
	a.find();
	a.display();
}
