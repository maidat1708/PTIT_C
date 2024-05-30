#include<stdio.h>
void vector(int a[],int b[],int vt[])
{
	vt[0]=b[0]-a[0];
	vt[1]=b[1]-a[1];
	vt[2]=b[2]-a[2];
}

int tichvohuong (int a[],int b[])
{
	int s=0;
	s=a[0]*b[0]+a[1]*b[1]+a[2]*b[2];
	return s;
}

void tichcohuong (int a[],int b[],int c[])
{
	c[0]=a[1]*b[2]-a[2]*b[1];
	c[1]=a[2]*b[0]-a[0]*b[2];
	c[2]=a[0]*b[1]-a[1]*b[0];
}

int main ()
{
		int a[3],b[3],c[3],d[3],s[3],vt1[3],vt2[3],vt3[3];
		for (int i=0;i<3;i++) scanf ("%d",&a[i]);
		for (int i=0;i<3;i++) scanf ("%d",&b[i]);
		for (int i=0;i<3;i++) scanf ("%d",&c[i]);
		for (int i=0;i<3;i++) scanf ("%d",&d[i]);
		vector(a,b,vt1);
		vector(a,c,vt2);
		vector(a,d,vt3);
		tichcohuong(vt1,vt2,s);
		if (tichvohuong(s,vt3)==0) printf ("Win\n");
		else printf ("Yasuo AFK\n");
}
