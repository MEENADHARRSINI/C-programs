/*
program 10
25.10.22
sum of two numbers using function overloading
*/
#include<iostream>
using namespace std;
int fnread(int *pinum1,int *pinum2);
float fnread(float *pfnum1,float *pfnum2);
long fnread(long *plnum1,long *plnum2);
short fnread(short *psnum1,short *psnum2);
double fnread(double *pdnum1,double *pdnum2);
int fnsumint(int inum1,int inum2);
float fnsumfloat(float fnum1,float fnum2);
long fnsumlong(long lnum1,long lnum2);
short fnsumshort(short snum1,short snum2);
double fnsumdouble(double dnum1,double dnum2);
int fndisplay(int sumint);
float fndisplay(float sumfloat);
long fndisplay(long sumlong);
short fndisplay(short sumshort);
double fndisplay(double sumdouble);
main()
{
	int inum1,inum2,inum3,sumint;
	float fnum1,fnum2,fnum3,sumfloat;
	long lnum1,lnum2,lnum3,sumlong;
	short snum1,snum2,snum3,sumshort;
	double dnum1,dnum2,dnum3,sumdouble;
	fnread(&inum1,&inum2);
	fnread(&fnum1,&fnum2);
	fnread(&lnum1,&lnum2);
	fnread(&snum1,&snum2);
	fnread(&dnum1,&dnum2);
	sumint=fnsumint(inum1,inum2);
	sumfloat=fnsumfloat(fnum1,fnum2);
	sumlong=fnsumlong(lnum1,lnum2);
	sumshort=fnsumshort(snum1,snum2);
	sumdouble=fnsumdouble(dnum1,dnum2);
	fndisplay(sumint);
	fndisplay(sumfloat);
	fndisplay(sumlong);
	fndisplay(sumshort);
	fndisplay(sumdouble);
}
int fnread(int *pinum1,int *pinum2)
{
	cout<<"int1";
	cin>>*pinum1;
	cout<<"int2";
	cin>>*pinum2;
}
float fnread(float *pfnum1,float *pfnum2)
{
	cout<<"float1";
	cin>>*pfnum1;
	cout<<"float2";
	cin>>*pfnum2;
}
long fnread(long *plnum1,long *plnum2)
{
	cout<<"long1";
	cin>>*plnum1;
	cout<<"long2";
	cin>>*plnum2;
}
short fnread(short *psnum1,short *psnum2)
{
	cout<<"short1";
	cin>>*psnum1;
	cout<<"short2";
	cin>>*psnum2;
}
double fnread(double *pdnum1,double *pdnum2)
{
	cout<<"double1";
	cin>>*pdnum1;
	cout<<"double2";
	cin>>*pdnum2;
}
int fnsumint(int inum1,int inum2)
{
	int sumint;
	sumint=inum1+inum2;
	return sumint;
}
float fnsumfloat(float fnum1,float fnum2)
{
	float sumfloat;
	sumfloat=fnum1+fnum2;
	return sumfloat;
}
long fnsumlong(long lnum1,long lnum2)
{
	long sumlong;
	sumlong=lnum1+lnum2;
	return sumlong;
}
short fnsumshort(short snum1,short snum2)
{
	short sumshort;
	sumshort=snum1+snum2;
	return sumshort;
}
double fnsumdouble(double dnum1,double dnum2)
{
	double sumdouble;
	sumdouble=dnum1+dnum2;
	return sumdouble;
}
int fndisplay(int sumint)
{
	cout<<"Sum of two integers="<<sumint;
}
float fndisplay(float sumfloat)
{
	cout<<"Sum of two floats="<<sumfloat;
}
long fndisplay(long sumlong)
{
	cout<<"Sum of two longs="<<sumlong;
}
short fndisplay(short sumshort)
{
	cout<<"Sum of two shorts="<<sumshort;
}
double fndisplay(double sumdouble)
{
	cout<<"Sum of two doubles="<<sumdouble;
}
