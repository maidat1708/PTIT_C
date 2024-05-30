#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main ()
{
	int n;
	scanf ("%d",&n);
	int a[n][n],c=0,d=0;
	for (int i=0;i<n;i++) for (int j=0;j<n;j++) scanf ("%d",&a[i][j]);
	int m;
	scanf ("%d",&m);
	int b[m][m];
	for (int i=0;i<m;i++) for (int j=0;j<m;j++) scanf ("%d",&b[i][j]);
	for (int i=0;i<n;i++)
	{
		if (c==m) c=0;
		for (int j=0;j<n;j++)
		{
			if (d==m) d=0;
			a[i][j]*=b[c][d];
			d++;
			printf ("%d ",a[i][j]);
		}
		c++;
		printf ("\n");
	}
	
}
