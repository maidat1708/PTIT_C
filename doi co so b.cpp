#include<stdio.h>
#include<string.h>
char x[]={
	'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H',
	'I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'
	};
	
int main ()
{
	int k
		scanf ("%d",&k);
		char s[1000]="";
		if (k==0) printf ("0\n");
		else
		{
			int i=0;
			while (k)
			{
				int tmp=k%2;
				k/=2;
				s[i++]=x[tmp];
			}
			s[i]='\0';
			for (int j=i-1;j>=0;j--) printf ("%c",s[j]);
			printf ("\n");
		}
	}

