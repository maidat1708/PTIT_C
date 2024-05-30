#include<stdio.h>
struct hh
{
	int stt;
	char ten[50];
	char loai[50];
	float ban;
	float mua;
	float lai;
};
struct hh ds[100];int n;
void nhap ()
{
	scanf ("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf ("\n");
		gets(ds[i].ten);
		scanf ("\n");
		gets(ds[i].loai);
		scanf ("%f",&ds[i].ban);
		scanf ("%f",&ds[i].mua);
		ds[i].stt=i+1;
		ds[i].lai=ds[i].mua-ds[i].ban;
	}
}
void sapxep ()
{
	for (int i=0;i<n-1;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (ds[i].lai<ds[j].lai)
			{
			struct hh tmp=ds[i];
				ds[i]=ds[j];
				ds[j]=tmp;
			}
		}
	}
}
void in ()
{
	for (int i=0;i<n;i++) printf ("%d %s %s %.2f\n",ds[i].stt,ds[i].ten,ds[i].loai,ds[i].lai);
}
int main ()
{
	nhap();
	sapxep();
	in();
}
