#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
struct SV 
{
	int so;
	int tong;
	char s[3];
	char ma[50],ten[50],lop[50];
	float a,b,c;
};
struct SV ds[100]; 
int main ()
{
	int t;
	scanf ("%d",&t);char so[10]="";
	for (int i=0;i<t;i++)
	{
		ds[i].so=i+1;
		scanf ("\n");
		scanf ("%s",ds[i].ma);
		int len=strlen(ds[i].ma);
		int n=0;
		for (int j=5;j<=6;j++)
		{
			ds[i].s[n++]=ds[i].ma[j];
		}
		ds[i].tong=0;
		for (int j=7;j<len;j++)
		{
			ds[i].tong=ds[i].tong*10+ds[i].ma[j]-'0';
		}
		scanf ("\n");
		gets(ds[i].ten);
		scanf ("%s",ds[i].lop);
		scanf ("%f%f%f",&ds[i].a,&ds[i].b,&ds[i].c);
	}
	for (int i=0;i<t-1;i++)
	{
		for (int j=i+1;j<t;j++)
		{
			if (strcmp(ds[i].s,ds[j].s)>0)
			{
				struct SV tmp=ds[i];
				ds[i]=ds[j];
				ds[j]=tmp;
			}
			else if (strcmp(ds[i].s,ds[j].s)==0)
			{
				if (ds[i].tong>ds[j].tong)
				{
					struct SV tmp=ds[i];
					ds[i]=ds[j];
					ds[j]=tmp;
				}
			}
		}
	}
	for (int i=0;i<t;i++)
	{
		printf ("%d %s %s %s %.1f %.1f %.1f \n",i+1,ds[i].ma,ds[i].ten,ds[i].lop,ds[i].a,ds[i].b,ds[i].c);
	}
}
