/*
program 31
03.12.22
Addition of two numbers using constructor
*/
#include<iostream>
using namespace std;
class sum
{
	private:
		int firstNumber,secondNumber;
	public:
		sum()
		{
			firstNumber=10;
			secondNumber=20;
		}
	int findsum();
	void print(int sum);
};
int sum::findsum()
{
	return firstNumber+secondNumber;
}
void sum::print(int sum)
{
	cout<<sum;
}
main()
{
	sum s;
	int sum;
	sum=s.findsum();
	s.print(sum);
}
