#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
	int n,s=0;
	scanf("%d",&n);
	char ds[101][101];
	for (int i=0;i<n;i++)
	{
		scanf ("\n");
		gets (ds[i]);
	}
	for (int i=0;i<n;i++)
	{
		int dem=0;
		for (int j=0;j<n;j++)
		{
			if (ds[i][j]=='C')
			{
				dem++;
			}
		}
		s+=dem*(dem-1)/2;
	}
	for (int j=0;j<n;j++)
	{
		int dem=0;
		for (int i=0;i<n;i++)
		{
			if (ds[i][j]=='C')
			{
				dem++;
			}
		}
		s+=dem*(dem-1)/2;
	}
	printf ("%d",s);
}
