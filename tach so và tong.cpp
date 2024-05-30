#include<stdio.h>
#include<string.h>
void daonguoc(char a[]){
	int i,n=strlen(a); 
	char c[205];
	strcpy(c,a);
	for(i=0;i<n;++i) a[i]=c[n-1-i];
}
void tong(char a[],char b[]){
	int p=strlen(a),q=strlen(b),nho=0,i,t;
	daonguoc(a); daonguoc(b);
	strcat(a,"0");
	for(i=0;i<=p-q;++i) strcat(b,"0");
	for(i=0;i<strlen(a);++i){
		t=a[i]-'0'+b[i]-'0'+nho;
		nho=t/10; t=t%10;
		a[i]=t+'0';
	}
	if(a[strlen(a)-1]==0+'0') a[strlen(a)-1]='\0';
	daonguoc(a);
	puts(a);
}

int main(){
	char a[205],b[205],c[205]; int k=0,h=0,i;
	gets(a); strcpy(c,a);
	while(strlen(a)>1){
		int n=strlen(a); int j=n%2;
	for(i=0;i<strlen(a)/2;++i) {
		b[k++]=a[i];
		c[h++]=a[i+strlen(a)/2];
    }
        if(j!=0) c[h++]=a[strlen(a)-1];
    	b[k]='\0'; c[h]='\0';
		tong(c,b);
		strcpy(a,c);
		h=0;k=0;
	}
	}
