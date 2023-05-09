/*
program 9
21.10.22
biggest of three numbers
*/
#include<iostream>
using namespace std;
int fnread(int *pinum1,int *pinum2,int *pinum3);
float fnread(float *pfnum1,float *pfnum2,float *pfnum3);
long fnread(long *plnum1,long *plnum2,long *plnum3);
short fnread(short *psnum1,short *psnum2,short *psnum3);
double fnread(double *pdnum1,double *pdnum2,double *pdnum3);
int fnbigint(int num1,int num2,int num3);
float fnbigfloat(float num1,float num2,float num3);
long fnbiglong(long num1,long num2,long num3);
short fnbigshort(short num1,short num2,short num3);
double fnbigdouble(double num1,double num2,double num3);
int fndisplay(int bigint);
float fndisplay(float bigfloat);
long fndisplay(long biglong);
short fndisplay(short bigshort);
double fndisplay(double bigdouble);
main()
{
	int inum1,inum2,inum3,bigint;
	float fnum1,fnum2,fnum3,bigfloat;
	long lnum1,lnum2,lnum3,biglong;
	short snum1,snum2,snum3,bigshort;
	double dnum1,dnum2,dnum3,bigdouble;
	fnread(&inum1,&inum2,&inum3);
	fnread(&fnum1,&fnum2,&fnum3);
	fnread(&lnum1,&lnum2,&lnum3);
	fnread(&snum1,&snum2,&snum3);
	fnread(&dnum1,&dnum2,&dnum3);
	bigint=fnbigint(inum1,inum2,inum3);
	bigfloat=fnbigfloat(fnum1,fnum2,fnum3);
	biglong=fnbiglong(lnum1,lnum2,lnum3);
	bigshort=fnbigshort(snum1,snum2,snum3);
	bigdouble=fnbigdouble(dnum1,dnum2,dnum3);
	fndisplay(bigint);
	fndisplay(bigfloat);
	fndisplay(biglong);
	fndisplay(bigshort);
	fndisplay(bigdouble);
}
int fnread(int *pinum1,int *pinum2,int *pinum3)
{
	cout<<"int1";
	cin>>*pinum1;
	cout<<"int2";
	cin>>*pinum2;
	cout<<"int3";
	cin>>*pinum3;
}
float fnread(float *pfnum1,float *pfnum2,float *pfnum3)
{
	cout<<"float1";
	cin>>*pfnum1;
	cout<<"float2";
	cin>>*pfnum2;
	cout<<"float3";
	cin>>*pfnum3;
}
long fnread(long *plnum1,long *plnum2,long *plnum3)
{
	cout<<"long1";
	cin>>*plnum1;
	cout<<"long2";
	cin>>*plnum2;
	cout<<"long3";
	cin>>*plnum3;
}
short fnread(short *psnum1,short *psnum2,short *psnum3)
{
	cout<<"short1";
	cin>>*psnum1;
	cout<<"short2";
	cin>>*psnum2;
	cout<<"short3";
	cin>>*psnum3;
}
double fnread(double *pdnum1,double *pdnum2,double *pdnum3)
{
	cout<<"double1";
	cin>>*pdnum1;
	cout<<"double2";
	cin>>*pdnum2;
	cout<<"double3";
	cin>>*pdnum3;
}
int fnbigint(int inum1,int inum2,int inum3)
{
	int bigint;
	bigint=inum1>inum2?(inum1>inum3?inum1:inum3):(inum2>inum3?inum2:inum3);
	return bigint;
}
float fnbigfloat(float fnum1,float fnum2,float fnum3)
{
	float bigfloat;
	bigfloat=fnum1>fnum2?(fnum1>fnum3?fnum1:fnum3):(fnum2>fnum3?fnum2:fnum3);
	return bigfloat;
}
long fnbiglong(long lnum1,long lnum2,long lnum3)
{
	long biglong;
	biglong=lnum1>lnum2?(lnum1>lnum3?lnum1:lnum3):(lnum2>lnum3?lnum2:lnum3);
	return biglong;
}
short fnbigshort(short snum1,short snum2,short snum3)
{
	short bigshort;
	bigshort=snum1>snum2?(snum1>snum3?snum1:snum2):(snum2>snum3?snum2:snum3);
	return bigshort;
}
double fnbigdouble(double dnum1,double dnum2,double dnum3)
{
	double bigdouble;
	bigdouble=dnum1>dnum2?(dnum1>dnum3?dnum1:dnum2):(dnum2>dnum3?dnum2:dnum3);
	return bigdouble;
}
int fndisplay(int bigint)
{
	cout<<"Biggest of three integers="<<bigint;
}
float fndisplay(float bigfloat)
{
	cout<<"Biggest of three floats="<<bigfloat;
}
long fndisplay(long biglong)
{
	cout<<"Biggest of three longs="<<biglong;
}
short fndisplay(short bigshort)
{
	cout<<"Biggest of three shorts="<<bigshort;
}
double fndisplay(double bigdouble)
{
	cout<<"Biggest of three doubles="<<bigdouble;
}

