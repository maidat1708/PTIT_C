#include<stdio.h>
void run(int a[],int n)
{
	long long max=a[0],sum=0;
	for (int i=0;i<n;i++)
	{
		if (sum+a[i]<0)
		{
			sum=0;
			continue;
		}
		sum+=a[i];
		if (max<sum) max=sum;
	}
	printf ("%lld\n",max);
}
int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		int n;
		scanf ("%d",&n);
		int a[n],kt=0;
		for (int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if (a[i]>0) kt=1;
		}
		int max=a[0];
		if (kt==0)
		{
			for (int i=0;i<n;i++)
			{
				if (a[i]>max) max=a[i];
			}
			printf ("%d\n",max);	
		}
		else
		{
			run(a,n);
		}
	}
}
