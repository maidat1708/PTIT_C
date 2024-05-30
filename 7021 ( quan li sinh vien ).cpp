#include<stdio.h>
struct SV 
{
	int ma;
	char ten[50];
	float A,B,C,tong;
};
struct SV ds[100];
void run ()
{
	int t;
	int n;
	while (1)
	{
		scanf ("%d",&t);
		if (t==1)
		{
			int dem;
			scanf ("%d",&dem);
			n=dem;
			for (int i=1;i<=dem;i++)
			{
				scanf("\n");
				gets(ds[i].ten);
				scanf ("%f%f%f",&ds[i].A,&ds[i].B,&ds[i].C);
				ds[i].ma=i;
				ds[i].tong=0;
				ds[i].tong=ds[i].A+ds[i].B+ds[i].C;
			}
			printf ("%d\n",dem);
		}
		if (t==2)
		{
			int dem;
			scanf ("%d",&dem);
			scanf ("\n");
			gets(ds[dem].ten);
			scanf ("%f%f%f",&ds[dem].A,&ds[dem].B,&ds[dem].C);
			ds[dem].tong=0;
			ds[dem].tong=ds[dem].A+ds[dem].B+ds[dem].C;
			printf ("%d\n",dem);
		}
		if (t==3)
		{
			for (int i=1;i<=n-1;i++)
			{
				for (int j=i+1;j<=n;j++)
				{
					if (ds[i].tong>ds[j].tong)
					{
						struct SV tmp=ds[i];
						ds[i]=ds[j];
						ds[j]=tmp;
					}
				}
			}
			for (int i=1;i<=n;i++) printf ("%d %s %.1f %.1f %.1f\n",ds[i].ma,ds[i].ten,ds[i].A,ds[i].B,ds[i].C);
			break;
		}
	}
}
int main ()
{
	run ();
}
