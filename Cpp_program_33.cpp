/*
program 33
03.12.22
Biggest of three numbers
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
		int findbig();
		void print(int big);
};
int Big::findbig()
{
	return num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
}
void Big::print(int big)
{
	cout<<big;
}
main()
{
	Big b;
	int big;
	big=b.findbig();
	b.print(big);
}
