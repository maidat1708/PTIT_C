#include<stdio.h>
#include<string.h>
int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		scanf ("\n");
		char s[1000];
		gets(s);
		int chan=0,le=0,csc=0,csl=0,dem=1;
		int so=strlen(s);
		for (int i=0;i<strlen(s);i++)
		{
			if (s[0]=='0'||s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z') 
			{
				printf ("INVALID\n");
				dem=0;
				break;
			}
		}
		if (dem==1)
		{
			for (int i=0;i<strlen(s);i++)
			{
				if (s[0]!='0') if (s[i]=='2'||s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='0') csc++;
				else csl++;
			}
			if (csc>csl&&so%2==0||csl>csc&&so%2!=0) printf ("YES");
			else printf ("NO");
			printf("\n");
		}
	}
}
