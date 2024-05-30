#include<stdio.h>
#include<string.h>
// tao cau truc gom 2 tp la ten va sinh ( ngay thang nam )
struct tt {
	char ten[50];
	char sinh[50];
	int ngay=0,thang=0,nam=0;
}a,b; // a la thang min tuoi b la thang max tuoi

struct tt ds[100];int n;
void nhap()
{
	scanf("%d",&n);
	a.nam=10000;a.thang=10000;a.ngay=10000; // dat cac so to de khi vao dieu kien.
	b.nam=0;b.thang=0;b.ngay=0;
	for (int i=0;i<n;i++)
	{
		scanf ("\n");
		scanf ("%s%s",ds[i].ten,ds[i].sinh); // nhap ten va sinh
		int len=strlen(ds[i].sinh);
		for (int j=0;j<=1;j++) ds[i].ngay=ds[i].ngay*10+(ds[i].sinh[j]-'0'); // tach ra ngay vi du 21 thi j=0 thi ds[i].sinh[j]=2 va ds[i].ngay =0 nen ds[i].ngay=2
		// khi j=1 thi ds[i].sinh[j]=1 va ds[i].ngay=2 =>ds[i].ngay =21;
		for (int j=3;j<=4;j++) ds[i].thang=ds[i].thang*10+(ds[i].sinh[j]-'0'); // tuong tu
		for (int j=6;j<len;j++) ds[i].nam=ds[i].nam*10+(ds[i].sinh[j]-'0'); // tuong tu
		// dau tien tim max tuoi
		if (b.nam<ds[i].nam) // neu ds[i].nam>b.nam tuc la ds[i] lon tuoi hon b nen gan b=ds[i]
		{
			b=ds[i];
		}
		else if (b.nam==ds[i].nam) // neu bang nam thi xet thang
		{
			if (ds[i].thang>b.thang)
			{
				b=ds[i];
			}
			else if (ds[i].thang==b.thang) // neu bang thang thi xet ngay
			{
				if (ds[i].ngay>b.ngay) b=ds[i];
			}
		}
		if (a.nam>ds[i].nam) // tuong tu neu ds[i].nam<a.nam thi gan a=ds[i];
		{
			a=ds[i];
		}
		else if (a.nam==ds[i].nam)
		{
			if (ds[i].thang<a.thang)
			{
				a=ds[i];
			}
			else if (ds[i].thang==a.thang)
			{
				if (ds[i].ngay<a.ngay) a=ds[i];
			}
		}
	}
}
void in()
{
	printf ("%s\n%s",b.ten,a.ten);
}
int main ()
{
	nhap();
	in();
}
/*5
Nam 01/10/1991
An 30/12/1990
Binh 15/08/1993
Tam 18/09/1990
Truong 20/09/1990*/

