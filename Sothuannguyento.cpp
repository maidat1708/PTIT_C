#include<stdio.h>
#include<math.h>
int main ()
{
	int t;
	scanf ("%d",&t);
	for (int k=0;k<t;k++)
	{
		long long a,b,dem=0;
		scanf ("%lld %lld",&a,&b);
		long long i=a;
		while (i>=a && i<=b)
		{
			long long lan1=0,dem1=0,c=i,S=0;
			while (c!=0)
			{
				int k=c%10;
				S+=k;
				dem1++;
				if (k==2 || k==3 || k==5 || k==7) lan1++;
				c/=10;
			}
			if (lan1==dem1)
			{
				int lan2=0;
				for (int j=2;j<=sqrt(S);j++)
				{
					if (S%j==0) 
					{
						lan2=1;
						break;
					}
				}
				if (lan2==0)
				{
					int lan3=0;
					for (int j=2;j<=sqrt(i);j++)
					{
						if (i%j==0)
						{
							lan3=1;
							break;
						}
					}
					if (lan3==0) dem++;
				}
			}
			i++;	
		}
		printf ("%lld\n",dem);
	}
}
