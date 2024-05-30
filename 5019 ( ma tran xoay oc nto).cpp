#include<stdio.h>
int nt(int a)
{
	if (a<2) return 0;
	else 
	for (int i=2;i*i<=a;i++) if (a%i==0) return 0;
	return 1;
}
int main ()
{
	int t;
	scanf ("%d",&t);
	for (int k=1;k<=t;k++)
	{
		int n;
		scanf ("%d",&n);
		int	dem=0,a[n][n];
		for (int i=0;i<n;i++) for (int j=0;j<n;j++) a[i][j]=-1;
		printf ("Test %d:\n",k);
		int c[n*n],b=2;
		while (dem<n*n)
		{
			if (nt(b)==1) c[dem++]=b;
			b++;
		}
		dem=0;
		int d=0,cot=n-1,hang=n-1;
		while (d<=n/2)
		{
			for (int i=d;i<=cot;i++) a[d][i]=c[dem++];
			for (int i=d+1;i<=hang;i++) a[i][cot]=c[dem++];
			for (int i=cot-1;i>=d;i--) a[hang][i]=c[dem++];
			for (int i=hang-1;i>d-1;i--) a[i][d]=c[dem++];
			d++;cot--;hang--;
		}
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<n;j++)
			{
				printf ("%d ",a[i][j]);
			}
			printf ("\n");	
		}	
		printf ("\n");
	}
}
