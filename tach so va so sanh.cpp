#include <stdio.h>
#include <string.h>
#include <ctype.h>

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
int main()
{
	int t,n=0;
	char ds[501][1000];
	scanf ("%d",&t);
	while (t--)
	{
		char s[1000];
		scanf ("\n");
		gets (s);
		int len=strlen(s);
		int	j=0;
		for (int i=0;i<len;i++)
		{
			if (!isalpha(s[i]))
			{
				ds[n][j]=s[i];
				j++;
				if (isalpha(s[i+1]))
				{
					j=0;
					n++;
				}
			}
			else continue;
		}
		if (!isalpha(s[len-1]))	n++;
	}
	for (int i=0;i<n;i++)
	{
		int len1=strlen(ds[i]),ktra=1,dem=0;
		for (int j=0;j<len1;j++)
		{
			if (ds[i][j]=='0') dem++;
			else
			{
				ktra=0;
				break;
			}
		}
		if (ktra==1)
		{
			ds[i][1]='\0';
		}
		else
		{
			for (int j=0;j<=len1-dem;j++) ds[i][j]=ds[i][j+dem];
			ds[i][len1-dem+1]='\0';
		}
	}
	for (int i=0;i<n-1;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (sosanh(ds[i],ds[j])==1)
			{
				char tmp[1000]="";
				strcpy(tmp,ds[i]);
				strcpy(ds[i],ds[j]);
				strcpy(ds[j],tmp);
			}
		}
	}
	for (int i=0;i<n;i++) printf ("%s\n",ds[i]);
}
