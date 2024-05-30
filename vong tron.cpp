#include<stdio.h>
#include<string.h>

int main(){
	char a[55], b[1000]={0};
	scanf("%s", a);
	int count = 0, pos= 0;
	for(int i= 0; i< strlen(a); i++){
		if (b[i]== 0){
			b[i]= 1;
			int j;
			for(j= i+1; ; j++){
				if(a[i]== a[j])
					break;
				if(b[j]!= 0) count++;
			}
			b[j]= 1;
		}
	}
	printf("%d", count);
}
