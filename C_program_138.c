/*
program 139
16.08.22
read and display the character other than dollar and count the number of upper,lower,digit or special character
*/
#include<stdio.h>
main()
{
	char a,u,l,d,s;
	for(u=l=d=s=0,a=getchar();a!='$';a=getchar())
	{
		if (a>='A'&&a<='Z')
		u++;
		else
		if(a>='a'&&a<='z')
		l++;
		else
		if(a>='0'&&a<='9')
		d++;
		else
		s++;
	}
	printf("%d",u);
	printf("%d",l);
	printf("%d",d);
	printf("%d",s);
}
