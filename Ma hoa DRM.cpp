#include<stdio.h>
#include<string.h>
char P[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int tim (char c)
{
	for (int i=0;i<26;i++) if (c==P[i]) return i;
}
void doan1 (char s1[])
{
	int len1=strlen(s1),sum=0;
	for (int i=0;i<len1;i++) sum+=tim(s1[i]);
	for (int i=0;i<len1;i++) s1[i]=P[(tim(s1[i])+sum)%26];
}

void doan2 (char s2[])
{
	int len1=strlen(s2),sum=0;
	for (int i=0;i<len1;i++) sum+=tim(s2[i]);
	for (int i=0;i<len1;i++) s2[i]=P[(tim(s2[i])+sum)%26];
}

int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		char s[15001],s1[7501]="",s2[7501]="";
		scanf ("\n");gets(s);
		int len=strlen(s);
		for (int i=0;i<len/2;i++)
		{
			s1[i]=s[i];
			s2[i]=s[i+len/2];
		}
		doan1(s1);doan2(s2);
		for (int i=0;i<len/2;i++)
		{
			s1[i]=P[(tim(s1[i])+tim(s2[i]))%26];
			printf ("%c",s1[i]);
		}
		printf ("\n");
	}
}
