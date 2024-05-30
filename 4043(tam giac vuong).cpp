#include<stdio.h>

#define ll long long

int main ()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int n;
		scanf ("%d",&n);
		ll a[n];
		for (int i=0;i<n;i++) scanf ("%lld",&a[i]);
		for (int i=0;i<n;i++) a[i]*=a[i];
		// sap xep noi bot
		for(int i=0;i<n;i++)
		{
			int dem=1;
			for (int j=0;j<n-i-1;j++)
			{
				if (a[j]>a[j+1]) 
				{
					ll tmp=a[j];
					a[j]=a[j+1];
					a[j+1]=tmp;
					dem=0;
				}
			}
			if (dem==1) break;
		}
		// ktra
		int kt=0;
		for (int i=n-1;i>=2;i--)
		{
			int dau=0;
			int cuoi=i-1;
			while (dau<=cuoi)
			{
				if (a[dau]+a[cuoi]==a[i])
				{
					kt=1;
					break;
				}
				(a[cuoi]+a[dau]>a[i]) ? cuoi-- : dau++;
			}
			if (kt) break;
		}
		printf (kt? "YES\n" : "NO\n");
	}
}
