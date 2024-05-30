#include<stdio.h>
#include<string.h>
#include<ctype.h>
char ds1[100][50],ds2[100][50];
int n1=0,n2=0;
void tach1(char s[])
{
	char *p=strtok(s," ");
	while (p!=NULL)
	{
		strcpy(ds1[n1],p);
		n1++;
		p=strtok(NULL," ");
	}
}
void tach2(char s[])
{
	char *p=strtok(s," ");
	while (p!=NULL)
	{
		strcpy(ds2[n2],p);
		n2++;
		p=strtok(NULL," ");
	}
}
int main ()
{
	int t;
	scanf ("%d",&t);
	for (int k=1;k<=t;k++)
	{
		char s1[201],s2[201];
		scanf("\n");
		gets(s1);
		scanf("\n");
		gets(s2);
		tach1(s1);tach2(s2);
		printf ("Test %d: ",k);
		for (int i=0;i<n2;i++)
		{
			int len2=strlen(ds2[i]);
			char *p=ds2[i];
			for (int j=0;j<len2;j++) p[j]=tolower(p[j]);
		}
		for (int i=0;i<n1;i++)
		{
			char b[50];
			int len1=strlen(ds1[i]),ktra=1;
			strcpy(b,ds1[i]);
			for (int j=0;j<len1;j++) b[j]=tolower(b[j]);
			for (int j=0;j<n2;j++)
			{
				if (strcmp(b,ds2[j])==0)
				{
					ktra=0;
					break;
				}
			}
			if (ktra==1) printf ("%s ",ds1[i]);
		}
		n1=0;n2=0;
		printf ("\n");
	}
}
