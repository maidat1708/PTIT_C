#include<stdio.h>
long long ucln (long long a,long long b)
{
	if (a==0||b==0) return a+b;
	return ucln(b%a,a);
}
long long bcnn (long long a,long long b)
{
	return a*b/ucln(a,b);
}
int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		int n;
		scanf("%d",&n);
		long long BC=1;
		for (int i=2;i<=n;i++)
		{
			BC=bcnn(BC,i);
		}
		printf ("%lld\n",BC);	
	}
}

