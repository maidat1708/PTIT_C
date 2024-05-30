#include<stdio.h>
#include<string.h>
char P[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
int tim ( char c)
{
	int len=strlen(P);
	for (int i=0;i<len;i++) if (c==P[i]) return i;
}
int main ()
{
	while (1)
	{
		int n;
		scanf ("%d",&n);
		if (n==0) break;
		char s[29];
		scanf ("%s",s);
		int len=strlen(s);
		for (int i=0;i<len;i++)
		{	
			int t=tim(s[i]);
			s[i]=P[(t+n)%28];
		}
		for (int i=len-1;i>=0;i--) printf ("%c",s[i]);
		printf ("\n");
	}
}

