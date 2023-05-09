/*
program 42
16.01.23
Biggest of three numbers using constructor overloading and this pointer
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
		Big(int num1)
		{
			this->num1=num1;
			num2=20;
			num3=30;
		}
		Big(int num1,int num2)
		{
			this->num1=num1;
			this->num2=num2;
			num3=30;
		}
		Big(int num1,int num2,int num3)
		{
			this->num1=num1;
			this->num2=num2;
			this->num3=num3;
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
