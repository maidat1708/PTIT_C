#include<stdio.h>
int main ()
{
	int n,m;
	scanf ("%d%d",&n,&m);
	int a[n][m];
	for (int i=0;i<n;i++) for (int j=0;j<m;j++) scanf ("%d",&a[i][j]);
	int b,c;
	scanf ("%d%d",&b,&c);
	int d[n];
	for (int i=0;i<n;i++)
	{
		d[i]=a[i][c-1];
		a[i][c-1]=a[i][b-1];
		a[i][b-1]=d[i];
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		printf ("%d ",a[i][j]);
		printf ("\n");
	}
}
