#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,c,d;
	scanf ("%d%d%d%d",&a,&b,&c,&d);
	int x,y,z,t;
	scanf ("%d%d%d%d",&x,&y,&z,&t);
	int n,m;
	int f=abs(t-y),g=abs(z-x),h=abs(d-b),j=abs(c-a);
	int l[6];
	if (x>a)
	{
		int u=a,i=b,o=c,p=d;
		a=x;
		b=y;
		c=z;
		d=t;
		x=u;
		y=i;
		z=o;
		t=p;
	}
	if (t<=d) 
	{
		n=abs(c-x);
		m=abs(d-y);
	}
	if (t>d)
	{
		n=abs(c-x);
		m=abs(t-b);
	}
	l[0]=n,l[1]=m,l[2]=f,l[3]=g,l[4]=h,l[5]=j;
	int max=n;
	for (int i=0;i<6;i++)
	{
		if (max<l[i]) max=l[i];
	}
	printf ("%d",max*max);
}
