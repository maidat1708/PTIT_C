#include<stdio.h>
int stang(int n)
{
	while (n>=10)
	{
		int s=n%10;
		n/=10;
		if (s<=n%10) return 0;
	}
	return 1;
}
int same(int n)
{
	while (n>=10)
	{
		int a=n%10;
		n/=10;
		if (a!=n%10) return 0;
	}
	return 1;
}
int dau(int n)
{
	while (n>=10000)
	{
		int a=n%10;
		n/=10;
		if (a!=n%10) return 0;
	}
	n/=10;
	while (n>=10)
	{
		int a=n%10;
		n/=10;
		if (a!=n%10) return 0;
	}
	return 1;
}
int lp(int n)
{
	while (n>0)
	{
		int a=n%10;
		if (a!=6&&a!=8) return 0;
		n/=10;
	}
	return 1;
}
int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		scanf ("\n");
		char s[20];
		gets(s);
		int tong=0;
		for (int i=6;i<=11;i++)
		{
			if (i==9) continue;	
			else 
			{
				tong=tong*10+(s[i]-'0');
			}
		}
		if (stang(tong)||same(tong)||dau(tong)||lp(tong)) printf ("YES\n");
		else printf ("NO\n");
	}
}
