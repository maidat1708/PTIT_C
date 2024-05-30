#include<stdio.h>
int ktra (float a,float b[200],int dem)
{
	for (int i=0;i<dem;i++) if (b[i]==a) return i;
	return -1;
}
int xuly (float a[][100], int n , int m)
{
	float b[n*m];
	int dem=0;
	for (int i=1;i<n;i++) if (a[i][0])
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			int t=ktra(a[i][j],b,dem);
			if (t==-1)
			{
				b[dem]=a[i][j];
				dem++;
			}
		}
	}
	return dem;
}
int main ()
{
	int hang , cot ;
	printf ("Nhap hang: ");
	scanf ("%d",&hang);
	printf ("Nhap cot: ");
	scanf ("%d",&cot);
	float a[100][100];
	for (int i=0;i<hang;i++) for (int j=0;j<cot;j++) scanf ("%f",&a[i][j]);
	int dem=xuly(a,hang,cot);
	printf ("So luong co trong ma tran la: %d",dem);
}

