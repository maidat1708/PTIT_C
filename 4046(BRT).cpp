#include<stdio.h>
void run(int a[],int n)
{
	for (int i=0;i<n;i++)
	{
		int dem=1;
		for (int j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
				dem=0;
			}
		}
		if (dem==1) break;
	}
	int min=1000000000;
	int dem=1;
	for (int i=0;i<n-1;i++)
	{
		if (a[i+1]-a[i]==min) dem++;
		if (min>(a[i+1]-a[i])) 
		{
			min=a[i+1]-a[i];
			dem=1;
		}
	}
	printf ("%d %d\n",min,dem);
}
int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		int n;
		scanf("%d",&n);
		int a[n];
		for (int i=0;i<n;i++) scanf("%d",&a[i]);
		run(a,n);
	}
}
