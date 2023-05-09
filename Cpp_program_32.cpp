/*
program 32
03.12.22
Area of circle using constructor
*/
#include<iostream>
using namespace std;
class Area
{
	private:
		float radius;
	public:
		Area()
		{
			radius=10;
		}
		float findarea();
		void print(float area);
};
float Area::findarea()
{
	return 3.14*radius*radius;
}
void Area::print(float area)
{
	cout<<area;
}
main()
{
Area a;
float area;
area=a.findarea();
a.print(area);
}
