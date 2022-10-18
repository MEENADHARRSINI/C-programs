/*
program 138
15.08.22
read and display the character other than dollar and count the number of upper,lower
*/
#include<stdio.h>
main()
{
	char a,u,l,s;
	for(u=l=s=0,a=getchar();a!='$';a=getchar())
	{
		if (a>='A'&&a<='Z')
		u++;
		else
		if(a>='a'&&a<='z')
		l++;
		else
		s++;
	}
	printf("%d",u);
	printf("%d",l);
	printf("%d",s);
}
