/*
program 35
03.12.22
Area of circle
*/
#include<iostream>
using namespace std;
class Area
{
	private:
		float radius;
	public:
		Area(float radius1)
		{
			radius=radius1;
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
	Area a(10);
	float area;
	area=a.findarea();
	a.print(area);
}
