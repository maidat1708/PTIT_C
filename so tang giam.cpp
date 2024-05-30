#include<stdio.h>
#include<math.h>
int stang(int a)
{
	while (a>=10)
	{
		int s1=a%10;
		a/=10;
		if (s1<a%10) return 0;
	}
	return 1;
}
int main ()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int tmp=0;
		int so=pow(10,n-1);
		while(tmp<so) tmp=tmp*10+1;
		for (int i=1;i<=9;i++)
		{
			int c=i*so+9*tmp/10;
			for (int j=i*tmp;j<=c;j++)
			{
				if(stang(j)) printf ("%d ",j);
			}
		}
		printf ("\n");
	}
}
