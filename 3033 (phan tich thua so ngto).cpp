#include<stdio.h>
int main ()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int n;
		scanf("%d",&n);
		printf ("%d = ",n);
		int dem=0;
		while (n%2==0)
		{
			dem++;
			n/=2;
		}
		if (dem>0&&n>1) printf ("%d^%d * ",2,dem);
		else if (n==1) printf ("%d^%d",2,dem);
		for (int i=3;i*i<=n;i+=2)
		{
			dem=0;
			while(n%i==0)
			{
				dem++;
				n/=i;
			}
			if (n>1&&dem>0) printf ("%d^%d * ",i,dem);
			else if (n==1) printf ("%d^%d",i,dem); 
		}
		if (n>1) printf ("%d^1",n);
		printf ("\n");
	}
}
