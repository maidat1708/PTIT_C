#include<bits/stdc++.h>
using namespace std;
char ds[100][100];int n=0,b[100]={0};
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
int tn (char s[])
{
	int len=strlen(s);
	int a=len/2;
	for (int i=0;i<a;i++) if (s[i]!=s[len-1-i]) return 0;
	return 1;
}
int ktra(char s[],char ds[100][100],int n)
{
	for (int i=0;i<n;i++)
	{
		if (strcmp(s,ds[i])==0) return i;
	}
	return -1;
}
void tach()
{
	char s[51];
	while (scanf("%s",s)!=-1)
	{
		if (strlen(s)>1)
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
				else b[t]++;
			}
		}
	}
}
int main ()
{
	tach();
	for (int i=0;i<n-1;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (sosanh(ds[i],ds[j])==0)
			{
				char p[50];
				strcpy(p,ds[i]);
				strcpy(ds[i],ds[j]);
				strcpy(ds[j],p);
				int tmp=b[i];
				b[i]=b[j];
				b[j]=tmp; 
			}
		}
	}
	for (int i=0;i<n;i++) printf ("%s %d\n",ds[i],b[i]);
}
