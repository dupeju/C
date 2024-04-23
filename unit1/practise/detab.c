#include <stdio.h>
#define TAB 8

int main(){
	int c;
	int n, w, i;
	w = 1;
	while ((c = getchar())!= EOF){
		if (c == '\t'){
			n = TAB - w;
			for (i = 0; i < n; ++i)
				putchar(' ');
			w = 1;
		}
		else {
			putchar(c);
			++w;
			if (w == TAB || c == '\n')
				w = 1;
		}
	}
	return 0;
}