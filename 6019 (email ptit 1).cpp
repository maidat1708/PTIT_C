#include<stdio.h>
#include<string.h>
int main ()
{
	char s[100];
	gets(s);
	for (int i=0;i<strlen(s);i++)
	{
		if (s[i]>='A'&&s[i]<='Z') s[i]=s[i]+32;
	}
	if (s[0]==32) 
	{
		for (int i=0;i<strlen(s);i++)
		{
			if (s[i-1]==32&&s[i]!=32) printf ("%c",s[i]);
	  
		}
		for (int i=strlen(s)-1;i>=0;i--)
		{
			if (s[i-1]==32&&s[i]!=32)
			{
				for (int j=i+1;j<strlen(s);j++)
				{
					if (s[j]==32) break;
					printf ("%c",s[j]);
				}
				break;
			}
		}
	}
	else
	{
		printf ("%c",s[0]);
		for (int i=0;i<strlen(s);i++)
		{
			if (s[i-1]==32&&s[i]!=32) 
			{
				printf ("%c",s[i]);
			}  
		}
		for (int i=strlen(s)-1;i>=0;i--)
		{
			if (s[i-1]==32&&s[i]!=32)
			{
				for (int j=i+1;j<strlen(s);j++)
				{
					if (s[j]==32) break;
					printf ("%c",s[j]);
				}
				break;
			}
		}
	}
	printf("@ptit.edu.vn");
}
