#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main(){
	char s[100005];
	scanf("%s", s);
	char min = s[0], max = s[0];
	for(int i = 0; i < strlen(s); i++){
		if(s[i] > max) max = s[i];
		else if(s[i] < min) min = s[i];
	}
	int k = 0;
	while(max >= min){
		for(int i = k; i < strlen(s); i++){
			if(s[i] == max){
				k = i;
				printf("%c", s[i]);
			}
		}
		max--;
	}
	return 0;
}
