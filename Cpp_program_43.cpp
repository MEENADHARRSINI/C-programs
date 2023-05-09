/*
program 43
16.01.23
Biggest of three numbers without using constructor
*/
#include<iostream>
using namespace std;
class Big
{
	private:
		int num1,num2,num3;
	public:
		void read()
		{
			cin>>num1;
			cin>>num2;
			cin>>num3;
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
	Big b;
	int big;
	b.read();
	big=b.findBig();
	b.print(big);
}
