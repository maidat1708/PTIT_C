#include<stdio.h>
int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		int n,k,x=0;
		scanf ("%d%d",&n,&k);
		int a[n];
		for (int i=0;i<n;i++) scanf ("%d",&a[i]);
		for (int i=x;i<k+x;i++)
		{
			if (k+x==n+1) break;
			int max = a[i];
			for (int j=i+1;j<k+x;j++) if (max<a[j]) max=a[j];
			printf ("%d ",max);
			x++;
		}
		printf ("\n");
	}
}
