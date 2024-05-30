#include<bits/stdc++.h>
using namespace std;

int run (char c)
{
	if (c=='A'||c=='B'||c=='C') return 2;
	if (c=='D'||c=='E'||c=='F') return 3;
	if (c=='G'||c=='H'||c=='I') return 4;
	if (c=='J'||c=='K'||c=='L') return 5;
	if (c=='M'||c=='N'||c=='O') return 6;
	if (c=='P'||c=='Q'||c=='R'||c=='S') return 7;
	if (c=='T'||c=='U'||c=='V') return 8;
	if (c=='W'||c=='X'||c=='Y'||c=='Z') return 9;
}
int main ()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		scanf ("\n");
		char s[1001];
		gets(s);
		int a[1001],len=strlen(s),ktra=1;
		for (int i=0;i<len;i++) 
		{
			s[i]=toupper(s[i]);
			a[i]=run(s[i]);
		}
		for (int i=0;i<=len/2;i++)
		{
			if (a[i]!=a[len-1-i])
			{
				printf ("NO\n");
				ktra=0;
				break;
			}
		}
		if (ktra==1) printf ("YES\n");
	}
}	
