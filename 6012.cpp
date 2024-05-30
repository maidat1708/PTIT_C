#include<stdio.h>
#include<string.h>
int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		scanf ("\n");
		char s[501];
		gets(s);
		int dem=1;
		for (int i=0;i<strlen(s);i++)
		{
			if (s[i]!='3'&&s[i]!='2'&&s[i]!='5'&&s[i]!='7')
			{
				dem=0;
				break;
			}
		}
		if (dem==0) printf ("NO");
		if (dem==1) 
		{
			int lan=1;
			for (int i=0;i<strlen(s);i++)
			{
				if (s[i]!=s[strlen(s)-i-1]) 
				{
					lan=0;
					break;
				}
			}
			if (lan==1) printf ("YES");
			else printf ("NO");
		}
		printf ("\n");
	}
}
