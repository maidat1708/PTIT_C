#include<stdio.h>
int main ()
{
	int t;
	scanf ("%d",&t);
	for (int k=1;k<=t;k++)
	{
		int n,m;
		scanf ("%d%d",&n,&m);
		int a[n][m];
		int max=0,e,l;
		for (int i=0;i<n;i++) for(int j=0;j<m;j++) scanf ("%d",&a[i][j]);
		printf ("Test %d:\n",k);
		for (int i=0;i<n;i++)
		{
			int sum=0;
			for (int j=0;j<m;j++)
			{
				sum+=a[i][j];
			}
			if (max<sum) 
			{
				max=sum;
				e=i;
			}
		}
		int max1=0;
		for (int j=0;j<m;j++)
		{
			int sum=0;
			for (int i=0;i<n;i++)
			{
				if (i!=e)
				sum+=a[i][j];
			}
			if (max1<sum)
			{
				max1=sum;
				l=j;
			}
		}
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<m;j++)
			{
				if (i!=e&&j!=l) printf ("%d ",a[i][j]);
			}
			printf ("\n");
		}
	}
}
