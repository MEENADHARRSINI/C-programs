/*
program 39
04.12.22
Biggest of three numbers using constructor overloading
*/
#include<iostream>
using namespace std;
class Big
{
	private:
		int num1,num2,num3;
	public:
		Big()
		{
			num1=10;
			num2=20;
			num3=30;
		}
	    Big (int a)
	{
		num1=a;
		num2=20;
		num3=30;
	}
	    Big (int a,int b)
	{
		num1=a;
		num2=b;
		num3=30;
	}
	Big (int a,int b,int c)
	{
		num1=a;
		num2=b;
		num3=c;
	}
int findBig();
void print(int Big);
};
int Big::findBig()
{
	return num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
}
void Big::print(int Big)
{
	cout<<Big;
}
main()
{
	Big b1,b2(20),b3(20,30),b4(10,20,30);
	int big;
	big=b1.findBig();
	b1.print(big);
	big=b2.findBig();
	b2.print(big);
	big=b3.findBig();
	b3.print(big);
	big=b4.findBig();
	b4.print(big);
}
