#include<stdio.h>
int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		int n;
		scanf ("%d",&n);
		int a[n],b[n],min=10000,max=0;
		for (int i=0;i<n;i++)
		{
			scanf ("%d",&a[i]);
			b[i]=0;
		}
		for (int i=0;i<n;i++)
		{
			if (b[i]==0)
			{
				b[i]=1;
				for (int j=i+1;j<n;j++)
				{
					if (a[i]==a[j])
					{
						b[i]++;
						b[j]=-1;
					}
				}
			}
			if (max<b[i]) max=b[i];
		}
		for (int i=0;i<n;i++)
		{
			if (b[i]==max)
			{
				if (min>a[i]) min=a[i];
			}
		}
		printf ("%d\n",min);
	}
	return 0;
}

