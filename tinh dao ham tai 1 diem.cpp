#include<stdio.h>
int main ()
{
	long long n,x;
	scanf ("%lld%lld",&n,&x);
	long long t=x;
	long long a[n+1];
	for (int i=n;i>=0;i--) scanf ("%lld",&a[i]);
	for (int i=n;i>=0;i--)
	{
		a[i]=a[i]*i;
	}
	long long sum=0;
	for (int i=n;i>=2;i--)
	{
		for (int j=1;j<i-1;j++) x*=t;
		sum+=a[i]*x;
		x=t;
	}
	printf ("%lld",sum+a[1]);
}
