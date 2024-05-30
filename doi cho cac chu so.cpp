#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d\n", &t);
	while(t--)
	{
		char s[1005];
		scanf("%s", &s);
		int len= strlen(s), ktra= 0, t= len- 1,a;
		for (int i=len-2;i>=0;i--)
		{
			for (int j=i+1;j<len;j++)
			{
				if (s[i]>s[j])
				{
					t=i;
					ktra=1;
					break;
				}
			}
			if (ktra==1) break;
		}
		if (ktra==0) printf ("-1\n");
		else 
		{
			char p='/';
			for (int i=t+1;i<len;i++)
			{
				if (s[t]>s[i])
				{
					p=s[i];
					a=i;
					break;
				}
			}
			s[a]=s[t];
			s[t]=p;
			if (s[0]=='0') printf ("-1\n");
			else 
			{
				puts(s);
				printf ("\n");
			}
		}
	}
}
