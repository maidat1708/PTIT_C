#include<stdio.h>
#include<math.h>
int snt(int a)
{
	for (int i=2;i*i<=a;i++) if (a%i==0) return 0;
	return 1;
}
int stang(int a)
{
	while (a>=10)
	{
		int s1=a%10;
		a/=10;
		if (s1<=a%10) return 0;
	}
	return 1;
}
int sgiam(int a)
{
	while (a>=10)
	{
		int s1=a%10;
		a/=10;
		if (s1>=a%10) return 0;
	}
	return 1;
}
int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		int n,lan=0;
		scanf ("%d",&n);
		long u=pow(10,n-1),o=pow(10,n)-1;
		for (int i=u;i<=o;i++)
		{
			if (stang(i)==1||sgiam(i)==1)
			{
				if (snt(i)==1) lan++;
			}
		}
		printf ("%d\n",lan);
	}
}
