#include<stdio.h>
int ucln(int a,int b)
{
	if (a==0||b==0) return a+b;
	if (a>=b)
	{
		return ucln(a%b,b);
	}
	return ucln(b%a,a);
}
int bcnn (int a,int b)
{
	return a*b/ucln(a,b);
}
int main ()
{
	int t;
	scanf ("%d",&t);
	for (int i=1;i<=t;i++)
	{
		int a,b,c,d;
		scanf ("%d%d%d%d",&a,&b,&c,&d);
		printf ("Case #%d: \n",i);
		int uc=ucln(a,b);
		a/=uc;
		b/=uc;
		uc=ucln(c,d);
		c/=uc;
		d/=uc;
		int tu1=a*bcnn(b,d)/b;
		int tu2=c*bcnn(b,d)/d;
		int mau=bcnn(b,d);
		printf ("%d/%d %d/%d\n",tu1,mau,tu2,mau);
		int tu3=tu1+tu2;
		int uoc=ucln(tu3,mau);
		printf ("%d/%d\n",tu3/uoc,mau/uoc);
		uoc=ucln(tu1,tu2);
		printf ("%d/%d\n",tu1/uoc,tu2/uoc);
	}
}
