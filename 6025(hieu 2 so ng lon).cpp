#include<stdio.h>
#include<string.h>
int main ()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("\n");
		char a[1001];
		char b[1001];
		gets(a);
		scanf ("\n");
		gets(b);
		int len,ktr=2;
		int A[1001],B[1001];
		int lena=strlen(a);
		int lenb=strlen(b);
		if (lena>lenb) len=lena;
		else len=lenb;
		lena--;
		lenb--;
		for (int i=len-1;i>=0;i--)
		{
			if (lena>=0)
			{
				A[i]=a[lena] - '0';
				lena--;
			}
			else A[i]=0;
		}
		for (int i=len-1;i>=0;i--)
		{
			if (lenb>=0)
			{
				B[i]=b[lenb] - '0';
				lenb--;
			}
			else B[i]=0;
		}
		for (int i=0;i<len;i++)
		{
			if (A[i]>B[i])
			{
				ktr=1;
				break;
			}
			if (B[i]>A[i])
			{
				ktr=0;
				break;
			}
		}
		if (ktr==0) 
		{
			for (int i=0;i<len;i++)
			{
				int tmp=A[i];
				A[i]=B[i];
				B[i]=tmp;
			}
		}
		int nho=0,C[1001];
		for (int i=len-1;i>=0;i--)
		{
			int so=A[i]-B[i]-nho;
			if (so<0)
			{
				C[i]=so+10;
				nho=1;
			}
			else
			{
				C[i]=so;
				nho=0;
			}
		}
		if (ktr==2) printf ("0");
		else 
		{
			int dem=0;
			for (int i=0;i<len;i++)
			{
				if (C[i]!=0) break;
				else dem++;
			}
			for (int i=dem;i<len;i++) printf ("%d",C[i]);
		}
		printf ("\n");
	}
}
