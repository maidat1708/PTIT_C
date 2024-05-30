#include<stdio.h>
int ucln (int a,int b)
{
	if (a==0||b==0) return a+b;
	return ucln(b%a,a);
}
int bcnn (int a,int b)
{
	return a*b/ucln(a,b);
}
int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		int n;
		scanf ("%d",&n);
		int a[n];
		for (int i=0;i<n;i++)
		{
			scanf ("%d",&a[i]);
		}
		printf ("%d ",a[0]);
		for (int i=1;i<n;i++)
		{
			printf ("%d ",bcnn(a[i-1],a[i]));
		}
		printf ("%d",a[n-1]);
		printf ("\n");
	}
}
/* input :  	
3
3
1 2 3
3
5 10 5
3
3 4 5
output:
1 2 6 3
5 10 10 5
3 12 20 5 */


