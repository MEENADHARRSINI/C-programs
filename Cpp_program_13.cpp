/*
program 13
26.10.22
sum of two numbers using local and global variables
*/
#include<iostream>
using namespace std;
int a,b,c;
main()
{
	int a,b,c;
	cin>>a>>b;
	c=a+b;
	cout<<"Sum of two numbers="<<c;
	printf("\n");
	cin>>::a>>::b;
	::c=::a+::b;
	cout<<"Sum of two numbers="<<::c;
}
