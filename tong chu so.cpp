#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main(){
	char s[100000];
	scanf("%s", s);
	int sum = 0, m = 0, count = 1;
	for(int i = 0; i < strlen(s); i++){
		sum += s[i] -'0';
	}
	if(sum < 10) printf("1");
	else{
		while(sum >= 10){
			m = 0;
			while(sum > 0){
				m += sum%10;
				sum = sum/10;
			}
			sum = m;
			count++;
		}
		printf("%d", count);
	}
	return 0;
}
