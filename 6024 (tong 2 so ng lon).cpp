#include<stdio.h>
#include<string.h>
void daonguoc(char a[],int n){
	char c[500];
	strcpy(c,a);
	for(int i=0;i<strlen(a);++i) a[i]=c[n-1-i];
}
void tong(char a[],char b[]){
	int p=strlen(a),q=strlen(b),nho=0,i,t;
	daonguoc(a,p);
	daonguoc(b,q);
	strcat(a,"0");
	for(i=0;i<=p-q;++i) strcat(b,"0");
	for(i=0;i<strlen(a);++i) {
		t=a[i]-'0'+b[i]-'0'+nho;
		nho=t/10; t=t%10;
		a[i]=t+'0';
	}
	if(a[strlen(a)-1]==0+'0') a[strlen(a)-1]='\0';
	daonguoc(a,strlen(a));
	puts(a);
}
int main(){
	int m;
	scanf("%d",&m);
	while(m--){
		char a[500],b[500];
		scanf("%s%s",&a,&b);
		int p=strlen(a),q=strlen(b);
		if(p>q) tong(a,b);
		else tong(b,a);
	}
}
