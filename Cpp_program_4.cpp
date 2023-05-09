/*
program 4
20.10.22
biggest of three numbers
*/
#include<iostream>
using namespace std;
main()
{
	int firstnumber,secondnumber,thirdnumber,find;
	cin>>firstnumber>>secondnumber>>thirdnumber;
	find=firstnumber>secondnumber?(firstnumber>thirdnumber?firstnumber:thirdnumber):(secondnumber>thirdnumber?secondnumber:thirdnumber);
	cout<<"Biggest of three numbers="<<find;
}
