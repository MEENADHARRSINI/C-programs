/*
program 11
26.10.22
sum of two numbers using function template
*/
#include<iostream>
using namespace std;
template<class T>void fnread(T*,T*);
template<class T>T fnsum(T,T);
template<class T>void fndisplay(T);
main()
{
	int intnum1,intnum2,intsum;
	float floatnum1,floatnum2,floatsum;
	long longnum1,longnum2,longsum;
	short shortnum1,shortnum2,shortsum;
	double doublenum1,doublenum2,doublesum;
	fnread(&intnum1,&intnum2);
	fnread(&floatnum1,&floatnum2);
	fnread(&longnum1,&longnum2);
	fnread(&shortnum1,&shortnum2);
	fnread(&doublenum1,&doublenum2);
	intsum=fnsum(intnum1,intnum2);
	floatsum=fnsum(floatnum1,floatnum2);
	longsum=fnsum(longnum1,longnum2);
	shortsum=fnsum(shortnum1,shortnum2);
	doublesum=fnsum(doublenum1,doublenum2);
	fndisplay(intsum);
	fndisplay(floatsum);
	fndisplay(longsum);
	fndisplay(shortsum);
	fndisplay(doublesum);
}
template<class T>void fnread(T* num1,T* num2)
{
	cout<<"Enter first number:";
	cin>>*num1;
	cout<<"Enter second number:";
	cin>>*num2;
}
template<class T>T fnsum(T num1,T num2)
{
	return num1+num2;
}
template<class T>void fndisplay(T sum)
{
	cout<<"Sum of two numbers="<<sum;
	printf("\n");
}

