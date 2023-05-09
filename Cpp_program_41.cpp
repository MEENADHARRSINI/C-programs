/*
program 41
16.01.23
Area of circle using constructor overloading and this pointer
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
		Area(float radius)
		{
			this->radius=radius;
		}
		float findArea();
		void print(float Area);
};
float Area::findArea()
{
	return 3.14*radius*radius;
}
void Area::print(float Area)
{
	cout<<Area;
}
main()
{
	Area a1,a2(50);
	float area;
	area=a1.findArea();
	a1.print(area);
	area=a2.findArea();
	a2.print(area);
}
