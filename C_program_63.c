/*
program 63
25.06.22
sum of positive and negative other than thousand
*/
#include<stdio.h>
main()
{
	int n,p,c;
	scanf("%d",&c);
	p=n=0;
	while(c!=1000)
	{
		if(c>0)
		p=p+c;
		else
		if(c<0)
		n=n+c;
		else
		printf("not negative %d",c);
		scanf("%d",&c);
	}
	printf("%d",p);
	printf("%d",n);
}
