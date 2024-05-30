#include<stdio.h>
#include<string.h>
char ds1[100][100],ds2[100][100];
int n1=0,n2=0;
int ktra(char p[],char ds[100][100], int n)
{
	for (int i=0;i<n;i++)
	{
		if (strcmp(p,ds[i])==0) return 1;
	}
	return -1;
}
void tach1(char s[])
{
	char *p=strtok(s," ");
	while (p!=NULL)
	{
		int t=ktra(p,ds1,n1);
		if (t==-1)
		{
			strcpy(ds1[n1],p);
			n1++;
		}
		p=strtok(NULL," ");
	}
}
void tach2(char s[])
{
	char *p=strtok(s," ");
	while (p!=NULL)
	{
		int t=ktra(p,ds2,n2);
		if (t==-1)
		{
			strcpy(ds2[n2],p);
			n2++;
		}
		p=strtok(NULL," ");
	}
}
void sapxep(char ds[100][100],int n)
{
	for (int i=0;i<n-1;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (strcmp(ds[i],ds[j])>0)
			{
				char p[100];
				strcpy(p,ds[i]);
				strcpy(ds[i],ds[j]);
				strcpy(ds[j],p);
			}
		}
	}
}
int main ()
{
	char s1[100],s2[100];
	gets(s1);
	scanf ("\n");
	gets(s2);
	tach1(s1);
	tach2(s2);
	sapxep(ds1,n1);
	for (int i=0;i<n1;i++)
	{
		if (ktra(ds1[i],ds2,n2)==-1)
		printf ("%s ",ds1[i]);
	}
}
