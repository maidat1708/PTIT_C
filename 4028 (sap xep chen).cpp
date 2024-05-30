#include<stdio.h>
void xuly(int a[],int n)
{
	{
		for (int i=0;i<n;i++)
		{
			printf ("Buoc %d: ",i);
			int k=a[i];
			int j=i-1;
			while (j>=0&&a[j]>k)
			{
				a[j+1]=a[j];
				j=j-1;
			}
			a[j+1]=k;
			for (int j=0;j<=i;j++) printf ("%d ",a[j]);
			printf ("\n");
		}
	}
}
int main ()
{
	int n;
	scanf ("%d",&n);
	int a[n];
	for (int i=0;i<n;i++) scanf ("%d",&a[i]);
	xuly(a,n);
}
