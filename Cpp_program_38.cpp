/*
program 38
04.12.22
Area of circle
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
		Area (float a)
		{
			radius=a;
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
	Area a1,a2(20);
	float area;
	area=a1.findArea();
	a1.print(area);
	area=a2.findArea();
	a2.print(area);
}
