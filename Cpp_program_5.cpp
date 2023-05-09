/*
program 5
20.10.22
sum of two numbers using functions
*/
#include<iostream>
using namespace std;
int fnread(int *pfirstnum,int *psecondnum);
int fnfind(int firstnum,int secondnum);
int fndisplay(int find);
main()
{
	int firstnum,secondnum,sum;
	fnread(&firstnum,&secondnum);
	sum=fnfind(firstnum,secondnum);
	fndisplay(sum);
}
int fnread(int *pfirstnum,int *psecondnum)
{
	cin>>*pfirstnum>>*psecondnum;
}
int fnfind(int firstnum,int secondnum)
{
	int sum;
	sum=firstnum+secondnum;
	return sum;
}
int fndisplay(int find)
{
	int sum;
	cout<<"Sum of two numbers="<<sum;
}
