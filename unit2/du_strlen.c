#include <stdio.h>

int strlen(char s[]);
int main(){
	int n;
	n = strlen("dupengjun");
	printf("str有%d个字符\n", n);
	return 0;
}
int strlen(char s[]){
	int i;
	i = 0;
	while(s[i] != '\0'){
		++i;
	}
	return i;
}