#include<stdio.h>
#include<math.h>
#define PI 3.141592653589793238
void run(double x1,double y1,double x2,double y2,double x3,double y3)
{
	double A=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	double B=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	double C=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	if (A+B<=C||A+C<=B||B+C<=A) 
	{
		printf ("INVALID");
		return;
	}
	else 
	{
		double P=(A+B+C)/2;
		double S=sqrt(P)*sqrt(P-A)*sqrt(P-B)*sqrt(P-C);
		double R=(A*B*C)/(4*S);
		double S1=PI*(R*R);
		printf ("%.3lf",S1);
		return;
	}
}
int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		double a,b,c,d,e,f;
		scanf ("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
		run(a,b,c,d,e,f);
		printf ("\n");
	}
}
