#include<stdio.h>
void tich(int a[][50],int b[][50],int c[][50], int n)
{
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			for (int k=0;k<n;k++)
				c[i][j]+=a[i][k]*b[k][j];
}
int main ()
{
	int t;
	scanf ("%d",&t);
	for (int k=1;k<=t;k++)
	{
		int n;
		scanf ("%d",&n);
		int a[50][50];
		for (int i=0;i<n;i++) 
		{
			for (int j=0;j<n;j++)
			{
				if (j<=i) a[i][j]=j+1;
				else a[i][j]=0;
			}
		} 
		int b[50][50];
		int c[50][50];
		for (int i=0;i<n;i++) for (int j=0;j<n;j++) b[j][i]=a[i][j];
		for (int i=0;i<n;i++) for (int j=0;j<n;j++) c[i][j]=0;
		tich(a,b,c,n);
		printf ("Test %d:\n",k);
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<n;j++) printf ("%d ",c[i][j]);
			printf ("\n");
		}
		printf ("\n");
	}
}
