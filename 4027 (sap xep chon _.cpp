#include<stdio.h>
int doi(int a[],int i, int b[],int min)
{
	int t=a[i];
	a[i]=b[min];
	b[min]=t;
}
int main ()
{
	int n;
	scanf ("%d",&n);
	int a[n];
	for (int i=0;i<n;i++) scanf ("%d",&a[i]);
	for (int i=0;i<n-1;i++)
	{
		int min=i;
		for (int j=i+1;j<n;j++) if (a[j]<a[min]) min=j;
		doi(a,i,a,min);
		printf ("Buoc %d: ",i+1);
		for (int j=0;j<n;j++) printf ("%d ",a[j]);
		printf ("\n");		
	}
}
