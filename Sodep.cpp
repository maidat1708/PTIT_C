#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,f;
	scanf ("%d %d",&a,&b);
	if (a>b) 
	{
		f=a;
		a=b;
		b=f;
	}
	for (int i=a;i<b;i++)	
	{
		int lan=0,e=i,so=0,S=0;
		long long c=1,d=1,tong=0;
		if (e==1) lan=1;
		for (int j=2;j<=sqrt(e);j++)
		{
			if (e%j==0)
			{
				lan=1;
				break;
			}
		}
		if (lan==0)
		{
			while (e!=0)
			{
				so=e%10;
				S+=so;
				e/=10;	
			}
			int k=S;
			while (k>tong)
			{
				tong=c+d;
				c=d;
				d=tong;
			}
			if (k==tong) printf ("%d ",i);
		}
	}
}
