#include<stdio.h>
#include<string.h>
int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		char s[21];
		scanf ("\n");
		gets(s);
		int lan=0;
		for (int i=0;i<strlen(s)/2;i++)
		{
			if (s[i]!=s[strlen(s)-1-i])
			{
				lan++;
				if (lan==2)
				{
					printf ("NO");
					break;
				}
			}
		}
		if (lan==1) printf ("YES");
		if (lan==0)
		{
			if ((strlen(s))%2==0) printf ("NO");
			else printf ("YES");
		}
		printf ("\n");
	}
}
