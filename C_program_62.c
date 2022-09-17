/*
program 62
25.06.22
number of positive,negative or zero other than thousand
*/
#include<stdio.h>
main()
{ 
   int p,n,z,c;
   scanf("%d",&c);
   p=n=z=0;
   while(c!=1000)
   {
   	if(c>0)
   	p=p+1;
   	else
   	if(c<0)
   	n=n+1;
   	else
   	z=z+1;
   	scanf("%d",&c);
   	}
 printf("%d",p);
 printf("%d",n);
 printf("%d",z);
}
