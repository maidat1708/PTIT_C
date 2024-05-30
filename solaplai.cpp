#include<stdio.h>
int main ()
{
	int n,dem=0;
	scanf ("%d",&n);
	int a[n];
	for (int i=0;i<n;i++) scanf ("%d",&a[i]);
	for (int i=0;i<n;i++)
	{
		int lan=0;
		for (int j=i+1;j<n;j++) 
		{
			if (a[i]==a[j]) 
			{
				lan=1;
				dem=1;
				for (int k=0;k<i;k++)
				{
					if (a[i]==a[k])
					{
						lan=0;
						break;
					}	
				}
				break;
			}
		}
		if (lan==1) printf ("%d ",a[i]);
	}
	if (dem==0) printf ("0");
}
