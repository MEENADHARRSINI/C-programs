/*
program 28
29.10.22
biggest of three numbers using class
*/
#include<iostream>
using namespace std;
class Big
{
    private:
		int num1,num2,num3,big;
	public:
		void read();
		void find();
		void display();
};
void Big::read()
{
	cin>>num1>>num2>>num3;
}
void Big::find()
{
	big=num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
}
void Big::display()
{
	cout<<"Biggest of three numbers="<<big;
}
main()
{
	Big b;
	b.read();
	b.find();
	b.display();
}	


