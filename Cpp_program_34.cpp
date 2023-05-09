/*
program 34
03.12.22
Addition of two numbers using parameterised constructor
*/
#include<iostream>
using namespace std;
class Sum
{
	private:
		int firstNumber,secondNumber;
	public:
		Sum(int num1,int num2)
		{
			firstNumber=num1;
			secondNumber=num2;
		}
	int findsum();
	void print(int sum);
};
int Sum::findsum()
{
	return firstNumber+secondNumber;
}
void Sum::print(int s)
{
	cout<<s;
}
main()
{
	Sum s(10,100);
	int sum;
	sum=s.findsum();
	s.print(sum);
}

