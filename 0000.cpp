#include<stdio.h>
#include<math.h>
int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		int n,du1=0,du2=0,du3=0;
		scanf ("%d",&n);
		long long a[n];
		for (int i=0;i<n;i++)
		{
			scanf ("%lld",&a[i]);
			if (a[i]%3==1) du1++;
			if (a[i]%3==2) du2++;
			if (a[i]%3==0&&a[i]>0) du3++;
		}
		if (du1>du2) k=du2;
		else k=du1;
		int dem=du3+k+(du1-k)/3+(du2-k)/3;
		printf ("%d\n",dem);
	}
}

