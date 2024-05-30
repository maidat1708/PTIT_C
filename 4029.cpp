#include<stdio.h>
int swap(int a[],int i,int b[],int j)
{
	int c=a[i];
	a[i]=b[j];
	b[j]=c;
}
int main ()
{
	int n;
	scanf ("%d",&n);
	int a[n];
	int dem=0;
	for (int i=0;i<n;i++) scanf ("%d",&a[i]);
	for (int i=0;i<n-1;i++)
	{
		dem=1;
		for (int j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1]) 
			{
				swap(a,j,a,j+1);
				dem=0;
			}
 		}
 		if (dem==1) break;
 		printf ("Buoc %d: ",i+1);
 		for (int i=0;i<n;i++) printf ("%d ",a[i]);
 		printf ("\n");
	}
}
