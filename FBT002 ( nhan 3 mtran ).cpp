#include<stdio.h>
void tich(int a[][50],int b[][50],int c[][50], int m,int n,int q)
{
	for (int i=0;i<m;i++)
		for (int j=0;j<q;j++)
			for (int k=0;k<n;k++)
				c[i][j]+=a[i][k]*b[k][j];
}

int main ()
{
	int m,n,p,q;
	scanf ("%d%d%d%d",&m,&n,&p,&q);
	int a[50][50],b[50][50],c[50][50],d[50][50],e[50][50];
	for (int i=0;i<m;i++) for (int j=0;j<n;j++) scanf ("%d",&a[i][j]);
	for (int i=0;i<n;i++) for (int j=0;j<p;j++) scanf ("%d",&b[i][j]);
	for (int i=0;i<p;i++) for (int j=0;j<q;j++) scanf ("%d",&c[i][j]);
	for (int i=0;i<m;i++) for (int j=0;j<p;j++) d[i][j]=0;
	for (int i=0;i<m;i++) for (int j=0;j<q;j++) e[i][j]=0;
	tich(a,b,d,m,n,p);
	tich(d,c,e,m,p,q);
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<q;j++)
		{
			printf ("%d ",e[i][j]);
		}
		printf ("\n");
	}
}
