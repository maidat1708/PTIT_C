#include<stdio.h>
int main ()
{
	int n;
	scanf ("%d",&n);
	int gt=1;
	for (int i=1;i<=n;i++)
	{
		if (i%2!=0)
		{
			for (int j=0;j<i;j++) printf ("%d ",gt++);
			printf ("\n");
		}
		if (i%2==0)
		{
			int k=gt+i-1;
			for (int j=0;j<i;j++) 
			{
				printf ("%d ",k--);
				gt++;
			}
			printf ("\n");
		}
	}
}
