#include<stdio.h>
long fb(int a)
{
	if (a==1||a==2) return 1;
	long c=1,d=1;
	long tong;
	for (int i=3;i<=a;i++)
	{
		tong=c+d;
		c=d;
		d=tong;
	}
	return tong;
}
int main ()
{
	int n;
	scanf ("%d",&n);
	int dem=1;
	int c[n*n],a[n][n];
	c[0]=0;
	while (dem<n*n) 
	{
		c[dem]=fb(dem);
		dem++;
	}
	dem=0;
	int d=0,cot=n-1,hang=n-1;
	while (d<=n/2)
	{
		for (int i=d;i<=cot;i++) a[d][i]=c[dem++];
		for (int i=d+1;i<=hang;i++) a[i][cot]=c[dem++];
		for (int i=cot-1;i>=d;i--) a[hang][i]=c[dem++];
		for (int i=hang-1;i>d;i--) a[i][d]=c[dem++];
		d++;cot--;hang--;
	}
	for (int i=0;i<n;i++) 
	{
		for (int j=0;j<n;j++) 
		printf ("%d ",a[i][j]);
		printf ("\n");
	}
}
