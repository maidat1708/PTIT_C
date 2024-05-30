#include<stdio.h>
#include<string.h>
void xoadaucachdau (char *s,int len)
{
	int dem=0;
	for (int i=0;i<len;i++)
	{
		if (s[i]==' ') dem++;
		else break;
	}
	for (int i=0;i<=len-dem;i++) s[i]=s[i+dem];
	len=len-dem;
}
void xoadaucachcuoi (char *s,int len)
{
	int dem=0;
	for (int i=len-1;i>=0;i--)
	{
		if (s[i]==' ') dem++;
		else break;
	}
	len=len-dem;
}
int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		scanf ("\n");
		char s[100];
		gets(s);
		int len=strlen(s);
		for (int i=0;i<len;i++) if (s[i]>='A'&&s[i]<='Z') s[i]=s[i]+32;
		xoadaucachdau(s,len);
		xoadaucachcuoi(s,len);
		int lan=1;
		for (int i=0;i<len;i++)
		{
			if (s[i-1]==32&&s[i]!=32)
			{
				if (lan==0) printf (" "); 
				printf ("%c",s[i]-32);
				lan=0;
				for (int j=i+1;j<=len;j++)
				{
					if (s[j]==32||s[j]=='\0') break;
					printf ("%c",s[j]);
				}	
			}
		}
		printf (", ");
		for (int i=0;i<len;i++)
		{
			if (s[i]==32) break;
			printf ("%c",s[i]-32);
		}
		printf ("\n");
	}
	return 0;
}

