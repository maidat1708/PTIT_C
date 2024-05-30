#include<stdio.h>
#include<string.h>
char L[]="IVXLCDM";
int A[]={1,5,10,50,100,500,1000};
int ktra (char c)
{
	for (int i=0;i<7;i++) if (L[i]==c) return i;
}
int main ()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		scanf("\n");
		char s[20];
		gets(s);
		int len=strlen(s);
		int kq=A[ktra(s[len-1])];
		for (int i=len-1;i>0;i--)
		{
			int sau=ktra(s[i]);
			int truoc=ktra(s[i-1]);
			if (A[sau]>A[truoc]) kq-=A[truoc];
			else kq+=A[truoc];
		}
		printf ("%d\n",kq);
	}
}
