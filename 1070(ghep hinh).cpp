#include<stdio.h>
#include<math.h>
void swap (int *a,int *b)
{
		int c=*a;
		*a=*b;
		*b=c;
}
int cv(int s)
{
	int x=sqrt(s);
	if (x*x==s) return x;
	x++;
	if (x*x==s) return x;
	return 0;
}
int main ()
{
	int a,b,c,d,e,f,s,x;
	scanf ("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	s=a*b+c*d+e*f;
	x=cv(s);
	if (x==0) printf ("NO");
	else 
	{
		if (a>b) swap(&a,&b);
		if (c>d) swap(&c,&d);
		if (e>f) swap(&e,&f);
		if (b==d&&d==f&&f==x) printf ("YES");
		else 
		{
			if (d==x) 
			{
				swap(&a,&c);
				swap(&b,&d);
			}
			if (f==x)
			{
				swap(&a,&e);
				swap(&b,&f);
			}
			if (b==x)
			{
				a=x-a;
				if ((c==a&&e==a)||(c==a&&f==a)||(d==a&&e==a)||(d==a&&f==a)) printf ("YES");
				else printf ("NO");
			}
			else printf ("NO");
		}
	}
}
