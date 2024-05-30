#include<stdio.h>
int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		int n,m;
		scanf ("%d%d",&n,&m);
		int a[n][m],b[n*m];
		for (int i=0;i<n;i++) for (int j=0;j<m;j++) scanf ("%d",&a[i][j]);
		int d=0,dem=0;
		int cot=m-1;
		int hang=n-1;
		while (d<=n/2)
		{
			for (int i=d;i<=cot;i++) b[dem++]=a[d][i];
			for (int i=d+1;i<=hang;i++) b[dem++]=a[i][cot];
			for (int i=cot-1;i>=d;i--)  b[dem++]=a[hang][i];
			for (int i=hang-1;i>d;i--) b[dem++]=a[i][d];
			d++;cot--;hang--;
		}
		for (int i=0;i<n*m;i++) printf ("%d ",b[i]);
		printf ("\n");
	}
}
