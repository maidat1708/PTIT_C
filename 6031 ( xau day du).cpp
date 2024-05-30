#include<stdio.h>
#include<string.h>
int main ()
{
	char s[51];
	gets (s);
	int a[51]={},len=strlen(s),max=0;
	for (int i=1;i<len;i++)
	{
		for (int j=0;j<i;j++)
		{
			if (s[i]<=s[j]) continue;
			else {
				if (a[i]<a[j]+1) a[i]=a[j]+1;
			}
		}
		if (max < a[i] ) max = a[i];
	}
	printf ("%d",26-max-1);
}
