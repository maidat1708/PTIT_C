#include<stdio.h>
#include<string.h>
void loai0(char a[],int n)
{
	int dem=0;
	for (int i=0;i<n;i++) 
	{
		if (a[i]=='0'&&a[i+1]!='0') dem=i+1;
	}
	for (int i=0;i<=n-dem;i++) a[i]=a[i+dem];
}
void daonguoc (char a[],int n)
{
	char c[1201];
	strcpy(c,a);
	for (int i=0;i<strlen(a);i++) a[i]=c[n-1-i];
}
void tong (char a[],char b[])
{
	int p=strlen(a),q=strlen(b),nho=0;
	daonguoc(a,p);
	daonguoc(b,q);
	strcat(a,"0");
	for (int i=0;i<=p-q;i++) strcat(b,"0");
	for (int i=0;i<p;i++)
	{
		int t=a[i]-'0'+b[i]-'0'+nho;
		nho=t/10;t=t%10;
		a[i]=t+'0';
	}
	if (a[p-1]=='0') a[p-1]='\0';
	daonguoc(a,p);
	puts(a);
}
int main ()
{
	char s1[1201],s2[1201];
	gets(s1);
	scanf ("\n");
	gets(s2);
	int len1=strlen(s1),len2=strlen(s2);
	loai0(s1,len1);loai0(s2,len2);
	len1=strlen(s1),len2=strlen(s2);
	if (len1>len2) tong(s1,s2);
	else tong(s2,s1);
}

