#include<stdio.h>
int snt (int a)
{
	if (a==1) return 0;
	for (int i=2;i*i<=a;i++)
	{
		if (a%i==0) return 0;
	}
	return 1;
}
int main ()
{
	int n;
	scanf ("%d",&n);
	int a[n][n];
	for (int i=0;i<n;i++) for (int j=0;j<n;j++) scanf ("%d",&a[i][j]);
	int sum=0;
	for (int i=0;i<n;i++) for (int j=0;j<n;j++)
	if (j>=i) 
	{
		if (snt(a[i][j])==1) sum+=a[i][j];
	}
	printf ("%d",sum);
}
