/*
program 6
21.10.22
area of circle using functions
*/
#include<iostream>
using namespace std;
int fnread(int *pradius);
float fnfind(int radius);
float fndisplay(float find);
main()
{
	float area,find;
	int radius;
	fnread(&radius);
	area=fnfind(radius);
	fndisplay(find);
}
int fnread(int *pradius)
{
	cin>>*pradius;
}
float fnfind(int radius)
{
	float area;
	area=3.14*radius*radius;
	return area;
}
float fndisplay(float find)
{
	float area;
	cout<<"Area of circle="<<area;
}
