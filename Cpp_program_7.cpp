/*
program 7
21.10.22
biggest of three numbers
*/
#include<iostream>
using namespace std;
int fnread(int *pfirstnum,int *psecondnum,int *pthirdnum);
int fnfindbig(int firstnum,int secondnum,int thirdnum);
int fndisplay(int findbig);
main()
{
	int firstnum,secondnum,thirdnum,big,findbig;
	fnread(&firstnum,&secondnum,&thirdnum);
	big=fnfindbig(firstnum,secondnum,thirdnum);
	fndisplay(big);
}
int fnread(int *pfirstnum,int *psecondnum,int *pthirdnum)
{
	cin>>*pfirstnum>>*psecondnum>>*pthirdnum;
}
int fnfindbig(int firstnum,int secondnum,int thirdnum)
{
	int big;
	big=firstnum>secondnum?(firstnum>thirdnum?firstnum:thirdnum):(secondnum>thirdnum?secondnum:thirdnum);
	return big;
}
int fndisplay(int findbig)
{
	cout<<"Biggest of three integers="<<findbig;
}
