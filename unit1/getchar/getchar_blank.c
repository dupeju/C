#include <stdio.h>

int main(){
	char c = 0;
	//多个空格用一个空格代替
	while ((c = getchar()) != EOF){
		if (c == ' '){
			while ((c = getchar()) == ' ')
				;
			putchar(' ');
		}
		putchar(c);
	}
	return 0;
}
