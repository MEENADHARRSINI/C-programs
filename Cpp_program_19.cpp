/*
program 19
28.10.22
biggest of three numbers
*/
#include<iostream>
using namespace std;
typedef struct big
{
	int num1,num2,num3,big;
}Big;
Big fnread(Big *pa);
Big fnfindbig(Big *pa);
Big fndisplay(Big *pa);
main()
{
	Big a;
	fnread(&a);
	fnfindbig(&a);
	fndisplay(&a);
}
Big fnread(Big *pa)
{
	cin>>pa->num1>>pa->num2>>pa->num3;
}
Big fnfindbig(Big *pa)
{
	pa->big=pa->num1>pa->num2?(pa->num1>pa->num3?pa->num1:pa->num3):(pa->num2>pa->num3?pa->num2:pa->num3);
}
Big fndisplay(Big *pa)
{
	cout<<"Biggest of three numbers="<<pa->big;
}
