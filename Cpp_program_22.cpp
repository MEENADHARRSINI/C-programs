/*
program 22
29.10.22
biggest of three numbers using resolution operator
*/
#include<iostream>
using namespace std;
typedef struct big
{
	int num1,num2,num3,big;
	void read();
	void find();
	void display();
}BIG;
void BIG::read()
{
	cin>>num1>>num2>>num3;
}
void BIG::find()
{
	big=num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
}
void BIG::display()
{
	cout<<"Biggest of three numbers="<<big;
}
main()
{
	BIG b;
	b.read();
	b.find();
	b.display();
}
