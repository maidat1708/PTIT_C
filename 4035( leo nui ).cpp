#include<stdio.h>
int main ()
{
	int n;
	scanf ("%d",&n);
	int minup=50005,mindown=50005;
	int sumup=0,sumdown=0;
	while (n--)
	{
		int a,b;
		scanf ("%d %d",&a,&b);
		sumup+=a;
		sumdown+=b;
		if (minup>a) minup=a;
		if (mindown>b) mindown=b;
	}
	sumup+=mindown;
	sumdown+=minup;
	if (sumup>sumdown) printf ("%d\n",sumup);
	else printf ("%d\n",sumdown);
}
