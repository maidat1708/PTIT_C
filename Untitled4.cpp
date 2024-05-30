#include<stdio.h>
struct sv{
	char ten[50];
	float tbc;
	int ren;
};
struct sv ds[100];
int main ()
{
	int n,k;
	scanf ("%d%d",&n,&k);
	for (int i=0;i<n;i++)
	{
		scanf ("\n");
		gets(ds[i].ten);
		scanf ("%f %d",&ds[i].tbc,&ds[i].ren);
	}
	int x;
	for (int i=0;i<n;i++)
	{
		if (k==0) break;
		if (ds[i].tbc>=3.6&&ds[i].ren>=90)
		{
			printf ("%s: XUATSAC\n",ds[i].ten);
			k--;
			if (k==0) x=i;
			continue;
		}
		else if (ds[i].tbc>=3.2&&ds[i].ren>=80)
		{
			printf ("%s: GIOI\n",ds[i].ten);
			k--;
			if (k==0) x=i;
			continue;
		}
		else if (ds[i].tbc>=2.5&&ds[i].ren>=70)
		{
			printf ("%s: KHA\n",ds[i].ten);
			k--;
			if (k==0) x=i;
			continue;
		}
	}
	for (int i=x+1;i<n;i++) printf ("%s: KHONG\n",ds[i].ten);
	return 0;
}

