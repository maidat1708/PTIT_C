#include<stdio.h>
#include<string.h>
#include<ctype.h>
char ds[100][100];int n=0,dem=0,b[100]={0};
int ktra(char s[],char ds[100][100],int n)
{
	for (int i=0;i<n;i++)
	{
		if (strcmp(s,ds[i])==0) return i;
	}
	return -1;
}
void tach(char s[])
{
	char *p=strtok(s," ");
	while (p!=NULL)
	{
		int len=strlen(p);
		for (int i=0;i<len;i++) p[i]=tolower(p[i]);
		int t=ktra(p,ds,n);
		if (t==-1)
		{
			strcpy(ds[n],p);
			b[n]=1;
			n++;
		}
		else b[t]++;
		p=strtok(NULL," ");
	}
}
int main ()
{
	char s[100];
	gets(s);
	tach(s);
	for (int i=0;i<n;i++)
	{
		printf ("%s %d\n",ds[i],b[i]);
	}
}

