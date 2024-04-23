#include <stdio.h>
#define IN	1
#define OUT	0
int main(){
	char c;
	int state = OUT;
	for(c = getchar(); c != EOF; c = getchar()){
		if (c == '\n' || c == ' ' || c == '\t'){
			if(state == IN)
				putchar('\n');
			state = OUT;
		}
		else{
			putchar(c);
			state = IN;
		}
	}
	
	return 0;
}
