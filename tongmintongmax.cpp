#include<stdio.h>
int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		long long n,m;
		scanf ("%lld%lld",&n,&m);
		int a[20]={},ia=0,b[20]={},ib=0;
		while (n>0)
		{
			a[ia++]=n%10;
			n/=10;
		}
		while (m>0)
		{
			b[ib++]=m%10;
			m/=10;
		}
		long long mina=0,minb=0,maxa=0,maxb=0;
		for (int i=ia-1;i>=0;i--)
		{
			if (a[i]==5||a[i]==6)
			{
				mina=mina*10+5;
				maxa=maxa*10+6;
			}
			else
			{
				mina=mina*10+a[i];
				maxa=maxa*10+a[i];
			}
		}
		for (int i=ib-1;i>=0;i--)
		{
			if (b[i]==5||b[i]==6)
			{
				minb=minb*10+5;
				maxb=maxb*10+6;
			}
			else
			{
				minb=minb*10+b[i];
				maxb=maxb*10+b[i];
			}
		}
		printf ("%lld %lld\n",mina+minb,maxa+maxb);
	}
}
