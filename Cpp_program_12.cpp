/*
program 12
26.10.22
biggest of three numbers using function template
*/
#include<iostream>
using namespace std;
template<class T>void fnread(T*,T*,T*);
template<class T>T fnbig(T,T,T);
template<class T>void fndisplay(T);
main()
{
	int intnum1,intnum2,intnum3,intbig;
	float floatnum1,floatnum2,floatnum3,floatbig;
	long longnum1,longnum2,longnum3,longbig;
	short shortnum1,shortnum2,shortnum3,shortbig;
	double doublenum1,doublenum2,doublenum3,doublebig;
	fnread(&intnum1,&intnum2,&intnum3);
	fnread(&floatnum1,&floatnum2,&floatnum3);
	fnread(&longnum1,&longnum2,&longnum3);
	fnread(&shortnum1,&shortnum2,&shortnum3);
	fnread(&doublenum1,&doublenum2,&doublenum3);
	intbig=fnbig(intnum1,intnum2,intnum3);
	floatbig=fnbig(floatnum1,floatnum2,floatnum3);
	longbig=fnbig(longnum1,longnum2,longnum3);
	shortbig=fnbig(shortnum1,shortnum2,shortnum3);
	doublebig=fnbig(doublenum1,doublenum2,doublenum3);
	fndisplay(intbig);
	fndisplay(floatbig);
	fndisplay(longbig);
	fndisplay(shortbig);
	fndisplay(doublebig);
}
template<class T>void fnread(T* num1,T* num2,T* num3)
{
	cin>>*num1>>*num2>>*num3;
}
template<class T>T fnbig(T num1,T num2,T num3)
{
	return num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
}
template<class T>void fndisplay(T big)
{
	cout<<"Biggest of three numbers"<<big;
}

