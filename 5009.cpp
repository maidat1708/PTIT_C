#include<stdio.h>
int main ()
{
	int n;
	scanf ("%d",&n);
	int a[n][n];
	for (int i=0;i<n;i++) for (int j=0;j<n;j++) scanf ("%d",&a[i][j]);
	int b[n];
	for (int i=0;i<n;i++)
	{
		b[i]=a[i][i];
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (i+j==n-1)
			{
				a[i][i]=a[i][j];
				a[i][j]=b[i];
			}
			
		}
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		printf ("%d ",a[i][j]);
		printf ("\n");
	}
}
