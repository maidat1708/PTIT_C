#include<stdio.h>
#include<string.h>
char ds[1001][50],b[1001];
int n=0;
int tn (char s[])
{
	int len=strlen(s);
	int a=len/2;
	for (int i=0;i<a;i++) if (s[i]!=s[len-1-i]) return 0;
	return 1;
}
int ktra (char s[] ,char ds[1001][50],int n)
{
	for (int i=0;i<n;i++) if (strcmp (s,ds[i])==0) return i;
	return -1;
}
int sosanh (char s1[],char s2[])
{
	int len1=strlen(s1),len2=strlen(s2);
	if (len1>len2) return 1;
	else 
	{
		if (len2>len1) return 0;
		else 
		{
			for (int i=0;i<len1;i++)
			{
				if (s1[i]-'0'>s2[i]-'0') return 1;
				else if (s1[i]-'0'<s2[i]-'0') return 0;
				else continue;
			}
			return 0;
		}
	}
}
int main ()
{
	char s[50];
	while (scanf("%s",&s)!=-1)
	{
		if (tn(s))
		{
			int t=ktra(s,ds,n);
			if (t==-1)
			{
				strcpy(ds[n],s);
				b[n]=1;
				n++;
			}
			else
			{
				b[t]++;
			}
		}
	}
	for (int i=0;i<n-1;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (sosanh(ds[i],ds[j]))
			{
				char p[50];
				strcpy(p,ds[i]);
				strcpy(ds[i],ds[j]);
				strcpy(ds[j],p);
			}
		}
	 } 
	for (int i=0;i<n;i++) printf ("%s %d\n",ds[i],b[i]);
}
