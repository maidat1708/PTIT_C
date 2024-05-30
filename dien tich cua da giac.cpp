#include<stdio.h>
#include<math.h>
double dt (int x1,int y1,int x2,int y2,int x3,int y3)
{
	double A=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	double B=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	double C=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
	double p=(A+B+C)/2;
	double S=sqrt(p*(p-A)*(p-B)*(p-C));
	return S;
}
int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		int n;
		scanf ("%d",&n);
		int x[n],y[n];
		double S=0;
		for (int i=0;i<n;i++)
		{
			scanf ("%d%d",&x[i],&y[i]);
		}
		for (int i=0;i<n-2;i++)
		S+=dt(x[0],y[0],x[i+1],y[i+1],x[i+2],y[i+2]);
		printf ("%.3lf\n",S);
	}
}
