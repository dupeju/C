#include <stdio.h>

int main(){
	char c = 0;
	//����ո���һ���ո����
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
