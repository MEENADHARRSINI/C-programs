/*
program 27
29.10.22
area of circle using class
*/
#include<iostream>
using namespace std;
class Area
{
    private:
		float radius,area;
	public:
		void read();
		void find();
		void display();
};
void Area::read()
{
	cin>>radius;
}
void Area::find()
{
	area=3.14*radius*radius;
}
void Area::display()
{
	cout<<"Area of circle="<<area;
}
main()
{
	Area a;
	a.read();
	a.find();
	a.display();
}
