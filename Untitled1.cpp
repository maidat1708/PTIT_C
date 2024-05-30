#include<stdio.h>
#include<string.h>
int main ()
{
	char s[100],d[100];
	gets(s);
	int n=0,len=strlen(s),dem=3;
	for (int i=len-1;i>=0;i--)
	{
		d[n++]=s[i];
		dem--;
		if (dem==0)
		{
			d[n++]=',';
			dem=3;
		}
	}
	if (d[n-1]==',') for (int i=n-2;i>=0;i--) printf ("%c",d[i]);
	else for (int i=n-1;i>=0;i--) printf ("%c",d[i]);
	return 0;
}

