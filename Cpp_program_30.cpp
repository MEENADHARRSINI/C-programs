/*
program 30
31.10.22
read and display a text until dollar using read,display,number of upper,lower,digit or special characters,line,word,characters,copy text,copy first n characters,
copy n characters from mth position,length of the string,copy last n characters,reverse the text,count the number of times the pattern exist,delete the pattern
and replace the pattern
*/
#include<iostream>
using namespace std;
class Text
{
	private:
		string a;
	public:
		void read();
		void display();
		void countULDS(int *,int *,int *,int *);
		void countLWC(int *,int *,int *);
		void copy(char *);
		void copyNcharacters(char *,int );
		void copyNfromM(char *,int ,int );
		int length();
		const char* length1(const char *);
		void lastNcharacters(char *,int );
		void reverse(char *);
		int countpattern(char *);
		void deletepattern(char *,char *);
		void replacepattern(char *,char *,char *);
};
void Text::read()
{
	getline(cin,a);
}
void Text::display()
{
	int i;
	cout<<a;
}
void Text::countULDS(int *pu,int *pl,int *pd,int *ps)
{
	*pu=*pl=*pd=*ps=0;
	const char* pa=a.c_str();
	for (;*pa!='\0';pa++)
	{
		if (*pa>='A'&&*pa<='Z')
		(*pu)++;
		else
		if (*pa>='a'&&*pa<='z')
		{
			(*pl)++;
		}
		else
		if (*pa>='0'&&*pa<='9')
		(*pd)++;
		else
		(*ps)++;
	}
}
void Text::countLWC(int *pl,int *pw,int *pc)
{
	*pl=*pw=*pc=0;
	const char* pa=a.c_str();
	for (;*pa!='\0';pa++)
	{
		if (*pa=='\n')
		(*pl)++;
		else
		if ((*pa!=' '&&*(pa+1)==' ')||(*pa!='\t'&&*(pa+1)=='\t')||(*pa!='\n'&&*(pa+1)=='\n'))
		(*pw)++;
		else
		(*pc)++;
	}
}
void Text::copy(char *pb)
{
	const char* pa=a.c_str();
	for (;*pa!='\0';pa++,pb++)
	*pb=*pa;
	*pb='\0';
}
void Text::copyNcharacters(char *pb,int n)
{
	const char* pt;
	const char* pa=a.c_str();
	pt=pa+n;
	for (;*pa!='\0'&&pa<pt;pa++,pb++)
	*pb=*pa;
	*pb='\0';
}
void Text::copyNfromM(char *pb,int m,int n)
{
	const char* pa=a.c_str();
	const char* pt=pa+m+n; 
	const char* ps=pa+m;
	for (pa=ps;*pa!='\0'&&pa<pt;pa++,pb++)
	*pb=*pa;
	*pb='\0';
}
int Text::length()
{
	int c;
	const char* pa=a.c_str();
	for (c=0;*pa!='\0';pa++)
	c++;
	return c;
}
const char* Text::length1(const char *pa)
{
	for (;*pa!='\0';pa++)
	;
	return pa;
}
void Text::lastNcharacters(char *pb,int n)
{
	const char* pa=a.c_str();
	const char* ps=length1(pa)-n;
	pa=ps;
	for (;*pa!='\0';pb++,pa++)
	*pb=*pa;
	*pb='\0';
}
void Text::reverse(char *pb)
{
	const char* pa=a.c_str();
	const char* ps=length1(pa)-1;
	for (;ps>=pa;pb++,ps--)
	*pb=*ps;
	*pb='\0';
}
int Text::countpattern(char *pb)
{
	const char *pa=a.c_str();
	char *temp=pb;
	int p;
	p=0;
	for (;*pa!='\0';pa++)
	{
		const char* pc;
		for (pb=temp,pc=pa;*pb==*pc&&*pb!='\0';pb++,pc++)
		;
		if (*pb=='\0')
		p++;
	}
	return p;
}
void Text::deletepattern(char *pl,char *pb)
{
	const char*pa=a.c_str(),*ps;
	char *temp=pb;
	for (;*pa!='\0';)
	{
		const char* pc;
		for (pb=temp,pc=pa;*pb==*pc&&*pb!='\0';pb++,pc++)
		;
		if (*pb=='\0')
		pa=pc;
		else
		{
			*pl=*pa;
			pl++;
			pa++;
		}
	}
	*pl='\0';
}
void Text::replacepattern(char *pm,char *pb,char *pd)
{
	const char* pa=a.c_str();
	char *temp1=pb;
	char *temp2=pd;
	for (;*pa!='\0';)
	{
		const char* pc;
		for (pb=temp1,pc=pa;*pb==*pc&&*pb!='\0';pb++,pc++)
		;
		if (*pb=='\0')
		{
			pa=pc;
			for (pd=temp2;*pd!='\0';)
			{
				*pm=*pd;
				pm++;
				pd++;
			}
		}
		else
		{
			*pm=*pa;
			pa++;
			pm++;
		}
	}
	*pm='\0';
}
main()
{
	int i,u,s,w,c,p,n;
	char b[1000],l[1000],d[1000],m[1000],*pb,*pc,*pd,*ps,*pl,*pm,*pa;
	Text t;
	t.read();
	t.display();
	t.countULDS(&u,&l,&d,&s);
	cout<<u<<l<<d<<s;
	t.countLWC(&l,&w,&c);
	cout<<"\n"<<l<<w<<c;
	t.copy(b);
	puts(b);
	cin>>n;
	t.copyNcharacters(b,n);
	puts(b);
	cin>>m;
	cin>>n;
	t.copyNfromM(b,m,n);
	puts(b);
	c=t.length();
	cout<<c;
	pa=t.length1(b);
	printf("%p",pa);
	cin>>n;
	t.lastNcharacters(b,n);
	puts(b);
	t.reverse(b);
	cout<<"\n";
	puts(b);
	cin>>b;
	p=t.countpattern(b);
	cout<<p;
	cin>>b;
	t.deletepattern(l,b);
	puts(l);
	cin>>b;
	cin>>d;
	t.replacepattern(m,b,d);
	puts(m);
}
