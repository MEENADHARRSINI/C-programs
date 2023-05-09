/*
program 18
27.10.22
area of circle
*/
#include<iostream>
using namespace std;
typedef struct area
{
	float radius,area;
}Area;
Area fnread(Area *pa);
Area fnfind(Area *pa);
Area fndisplay(Area *pa);
main()
{
	Area a;
	fnread(&a);
	fnfind(&a);
	fndisplay(&a);
}
Area fnread(Area *pa)
{
	cin>>pa->radius;
}
Area fnfind(Area *pa)
{
	pa->area=3.14*(pa->radius)*(pa->radius);
}
Area fndisplay(Area *pa)
{
	cout<<"Area of circle="<<pa->area;
}
