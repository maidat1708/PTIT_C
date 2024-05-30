#include<stdio.h>
#include<string.h>
int main ()
{
	char s[100];
	char k[100];
	gets(s);
	scanf ("\n");
	gets(k);
	scanf("\n");
	int p;
	scanf ("%d",&p);
	p=p-1;
	for (int i=0;i<p;i++) printf ("%c",s[i]);
	for (int i=0;i<strlen(k);i++) printf ("%c",k[i]);
	for (int i=p;i<strlen(s);i++) printf ("%c",s[i]);
}
