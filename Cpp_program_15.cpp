/*
program 15
27.10.22
sum of two numbers using default arguements
*/
#include<iostream>
using namespace std;
int findsum(int num1=100,int num2=200);
main()
{
	int a,b,sum;
	cin>>a>>b;
	sum=findsum(a);
	cout<<sum;
	sum=findsum(b);
	cout<<sum;
	sum=findsum(a,b);
	cout<<sum;
}
int findsum(int num1,int num2)
{
	return num1+num2;
}
