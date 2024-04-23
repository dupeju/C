#include <stdio.h>

int main(){
	char c = 0;
	while ((c = getchar()) != EOF){
		if (c == '\t')
			printf("\\t");
		if (c == '\n')
			printf("\\n");
		if (c == '\\')
			printf("\\");
		putchar(c);
	}
	return 0;
}