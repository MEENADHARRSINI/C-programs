/*
program 21
28.10.22
area of circle using scope resolution operator
*/
#include<iostream>
using namespace std;
typedef struct area
{
	float area,radius;
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
