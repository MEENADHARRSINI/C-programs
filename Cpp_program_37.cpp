/*
program 37
04.12.22
Sum of two numbers using constructor overloading
*/
#include<iostream>
using namespace std;
class Sum
{
	private:
		int num1,num2;
	public:
		Sum()
		{
			num1=10;
			num2=20;
		}
		Sum(int a)
		{
			num1=a;
			num2=100;
		}
		Sum(int a,int b)
		{
			num1=a;
			num2=b;
		}
	int findSum();
	void print(int Sum);
};
int Sum::findSum()
{
	return num1+num2;
}
void Sum::print(int Sum)
{
	cout<<Sum;
}
main()
{
	Sum s1,s2(50),s3(300,400);
	int result;
	result=s1.findSum();
	s1.print(result);
	result=s2.findSum();
	s2.print(result);
	result=s3.findSum();
	s3.print(result);
}
