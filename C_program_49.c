/*
program 49
22.06.22
single digit in words using case method
*/
#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 0:printf("zero %d",a);
		break;
		case 1:printf("one %d",a);
		break;
		case 2:printf("two %d",a);
		break;
		case 3:printf("three %d",a);
		break;
		case 4:printf("four %d",a);
		break;
		case 5:printf("five %d",a);
		break;
		case 6:printf("six %d",a);
		break;
		case 7:printf("seven %d",a);
		break;
		case 8:printf("eight %d",a);
		break;
		case 9:printf("nine %d",a);
		break;
		default:printf("not a single digit %d",a);
	}
}
