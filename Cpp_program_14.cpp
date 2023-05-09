/*
program 14
26.10.22
area of circle using local and global variable
*/
#include<iostream>
using namespace std;
float r,a;
main()
{
	float a,r;
	cin>>r;
	a=3.14*r*r;
	cout<<"Area of circle="<<a;
	printf("\n");
	cin>>::r;
	::a=3.14*::r*::r;
	cout<<"Area of circle="<<::a;
}


