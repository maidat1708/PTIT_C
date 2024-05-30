#include<stdio.h>
int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		int n,m,z;
		scanf("%d%d%d",&n,&m,&z);
		int a[n],b[m],c[z],t[100000],dem=0,k=-1;
		for (int i=0;i<n;i++) scanf ("%d",&a[i]);
		for (int i=0;i<m;i++) scanf ("%d",&b[i]);
		for (int i=0;i<z;i++) scanf ("%d",&c[i]);
		for (int i=0;i<n;i++)
		{
			for (int j=k+1;j<m;j++)
			{
				if (a[i]==b[j])
				{
					t[i]=a[i];
					k=j;
					break;
				}
				else t[i]=-1;
			}
		}
		k=-1;
		for (int i=0;i<n;i++)
		{
			if (t[i]==-1) continue;
			else
			for (int j=k+1;j<z;j++)
			{
				if (t[i]==c[j])
				{
					dem++;
					k=j;
					printf ("%d ",t[i]);
					break;
				}
			}
		}
		if (dem==0) printf ("NO");
		printf ("\n");
	}
}
