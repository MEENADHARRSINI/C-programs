/*
program 29
31.10.22
read and display numbers until -1000 using array,read,display,biggest,smallest,position of biggest,position of smallest,interchange the position of biggest and 
position of smallest and sum of the numbers
*/
#include<iostream>
using namespace std;
class Num
{
	private:
		int a[50];
	public:
		void read();
		int big();
		int small();
		int positionofbig();
		int positionofsmall();
		void interchangedbigandsmall();
		int sum();
		void display();
};
void Num::read()
{
	int i;
	i=0;
	cin>>a[i];
	for (;a[i]!=-1000;)
	{
	i++;
	cin>>a[i];
    }
}
int Num::big()
{
	int i,b,big;
	for (i=0,b=a[0];a[i]!=-1000;i++)
	big=a[i]>b?a[i]:b;
	return big;
}
int Num::small()
{
	int i,c,small;
	for (i=0,c=a[0];a[i]!=-1000;i++)
	small=a[i]<c?a[i]:c;
	return small;
}
int Num::positionofbig()
{
	int i,pbig=0,b;
	for (i=0,b=a[0];a[i]!=-1000;i++)
	pbig=a[i]>b?i:pbig;
	return pbig;
}
int Num::positionofsmall()
{
	int i,psmall=0,c;
	for (i=0,c=a[0];a[i]!=-1000;i++)
	psmall=a[i]<c?i:psmall;
	return psmall;
}
void Num::interchangedbigandsmall()
{
	int ipbig,ipsmall,d;
	ipbig=positionofbig();
	ipsmall=positionofsmall();
	d=a[ipbig];
	a[ipbig]=a[ipsmall];
	a[ipsmall]=d;
}
int Num::sum()
{
	int i,sum=0;
	for (i=0;a[i]!=-1000;i++)
	sum=sum+a[i];
	return sum;
}
void Num::display()
{
	int i;
	for (i=0;a[i]!=-1000;i++)
	cout<<a[i]<<"\n";
}
main()
{
	int big,small,pbig,psmall,sum;
	Num n;
	n.read();
	big=n.big();
	small=n.small();
	pbig=n.positionofbig();
	psmall=n.positionofsmall();
	n.display();
	n.interchangedbigandsmall();
	n.display();
	sum=n.sum();
	cout<<big;
	cout<<"\n"<<small;
	cout<<"\n"<<pbig;
	cout<<"\n"<<psmall;
	cout<<"\n"<<sum;
}

