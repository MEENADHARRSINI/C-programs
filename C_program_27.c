/*
program 27
20.06.22
palindrome or not using if condition
*/
#include<stdio.h>
main()
{
	int n,a,b,c,d,r;
	scanf("%d",&n);
	a=n%10;
	b=n/10;
	c=b%10;
	d=b/10;
	r=a*100+c*10+d*1;
	if(n==r)
	printf("palindrome %d", n);
	else
	printf("not palindrome %d",n);
}
