/*
program 64
25.06.22
average of boys and girls mark
*/
#include<stdio.h>
main()
{
	int p,q,m,n,r,s,c;
	scanf("%d",&c);
	p=q=m=n=0;
	while(c!=1000)
	{
		if(c>0)
		{
			p=p+1;
			q=q+c;
		}
		else
		if(c<0)
		{
			n=n+1;
			m=m+c;
		}
		else
		printf("not negative %d",c);
		scanf("%d",&c);
	}
	r=q/p;
	s=m/n;
	printf("%d",r);
	printf("%d",s);
}

