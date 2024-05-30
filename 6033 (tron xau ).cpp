#include<stdio.h>
#include<string.h>
int xuly (char s1[],char s2[],char s[],int n)
{
	char tmp[400];
	for (int i=1;i<=2*n;i++)
	{
		int d=0;
		for (int j=0;j<n;j++)
		{
			tmp[d++]=s2[j];
			tmp[d++]=s1[j];
		}
		tmp[d]= '\0' ;
		if (strcmp(s,tmp)==0) return i;
		for (int j=0;j<n;j++)
		{
			s1[j]=tmp[j];
			s2[j]=tmp[j+n];
		}
	}
	return -1;
}
int main ()
{
	while (1)
	{
		int n;
		scanf ("%d",&n);
		if (n==0) break;
		char s1[201],s2[201],s[200];
		scanf ("%s%s%s",s1,s2,s);
		printf ("%d\n",xuly(s1,s2,s,n));
	}
}
