#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,f,k,dem=0;
	scanf ("%d%d%d%d",&a,&b,&f,&k);
	int x=b,ktra=1;
	if (a<f||a==0)
	{
		printf ("-1");
		return 0;
		
	}
	for (int i=1;i<k;i++)
	{
		if (i%2!=0)
		{
			if (2*a-f>b)
			{
				b=f+x;
				dem++;
			    b-=a;
			    if (b<a-f)
				{
					ktra=0;
					break;
				}
			}
			else b-=a;
		}
		else
		{
			if (a+f>b)
			{
				b=a-f+x;
				dem++;
				b-=a;
				if (b-f<0) 
				{
					ktra=0;
					break;
				}
			}
			else b-=a;
		}
	}
	if (k%2==0)
	{
		if (b<a-f)
		{
			ktra=0;
		}
		else if (a>b) dem++;
	}
	else
	{
		if (b<f)
		{
			ktra=0;
		}
		else if (a>b) dem++;
	}
	if (ktra==0) printf ("-1");
	else
	printf ("%d",dem);
}
