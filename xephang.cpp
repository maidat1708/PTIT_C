#include<stdio.h>
void sapxep (int a[],int n,int b[])
{
	for (int i=0;i<n-1;i++)
	{
		for (int j=i+1;j<n;j++)
			if (a[i]>a[j])
			{
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
				int t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
	}
}
int main ()
{
	int n;
	scanf ("%d",&n);
	int a[n],b[n];
	long long sum=0;
	for (int i=0;i<n;i++)
	{
		scanf ("%d%d",&a[i],&b[i]);
	}
	sapxep(a,n,b);
	for (int i=0;i<n;i++)
	{
		if (a[i]>sum) sum=a[i];
		sum+=b[i];
	}
	printf ("%lld",sum);
}
