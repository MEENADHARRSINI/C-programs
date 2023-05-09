/*
program 36
04.12.22
Biggest of three numbers
*/
#include<iostream>
using namespace std;
class Big
{
	private:
		int firstNumber,secondNumber,thirdNumber;
	public:
		Big(int num1,int num2,int num3)
		{
			firstNumber=num1;
			secondNumber=num2;
			thirdNumber=num3;
		}
	int findBig();
	void print(int Big);
};
int Big::findBig()
{
	return firstNumber>secondNumber?(firstNumber>thirdNumber?firstNumber:thirdNumber):(secondNumber>thirdNumber?secondNumber:thirdNumber);
}
void Big::print(int Big)
{
	cout<<Big;
}
main()
{
	Big b(10,20,30);
	int big;
	big=b.findBig();
	b.print(big);
}
