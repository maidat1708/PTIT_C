#include<stdio.h>
void swap (long long *a,long long *b)
{
	long long tmp=*a;
	*a=*b;
	*b=tmp;
}
int main ()
{
	int n;
	scanf ("%d",&n);
	long long a[n],b[n];
	for (int i=0;i<n;i++) 
	{
		scanf ("%lld",&a[i]);
		b[i]=0;
	}
	for (int i=0;i<n;i++)
	{
		if (b[i]==0)
		{
			b[i]=1;
			for (int j=i+1;j<n;j++)
			{
				if (a[i]==a[j])
				{
					b[i]++;
					b[j]=-1;
				}
			}
		}
	}
	for (int i=0;i<n-1;i++)
	{
		if (b[i]>0)
		{
			for (int j=i+1;j<n;j++)
			{
				if (a[i]>a[j])
				{
					swap(&a[i],&a[j]);
					swap(&b[i],&b[j]);
				}
			}
		}
	}
	for (int i=0;i<n;i++) if (b[i]>0) printf ("%lld ",a[i]);
	printf ("\n");
	for (int i=0;i<n;i++) if (b[i]>0) printf ("%lld ",b[i]);
}
