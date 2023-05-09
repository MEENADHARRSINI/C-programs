/*
program 16
27.10.22
Biggest of three numbers
*/
#include<iostream>
using namespace std;
int findbig(int num1=100,int num2=200,int num3=300);
main()
{
	int a,b,c,big;
	cin>>a>>b>>c;
	big=findbig(a);
	cout<<big;
	big=findbig(b);
	cout<<big;
	big=findbig(c);
	cout<<big;
	big=findbig(a,b);
	cout<<big;
	big=findbig(b,c);
	cout<<big;
	big=findbig(a,c);
	cout<<big;
	big=findbig(a,b,c);
	cout<<big;
}
int findbig(int num1,int  num2,int num3)
{
	return num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
}
