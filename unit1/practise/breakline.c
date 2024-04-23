#include <stdio.h>
#define BRLEN 40	 //输入行超过40断一次
//11111111111111111111111111111111111111
int main(){
	int nw,nb,c,i;
	nw = nb = 0;
	while ((c = getchar())!= EOF){
		if(c == ' ')
			++nb;
		if(c == '\t'){
			nb += 10;
			nw += 10;
		}
		if(c != ' '){
			for(i = 0;i < nb; ++i)
				putchar(' ');
			nb = 0;
		}
		
		++nw;
		if(c != ' ' && c !='\t')
			putchar(c);	
		if(nw >= BRLEN){
			nw = 0;
			nb = 0;
			putchar('\n');
		}
		if (c == '\n'){
			nw = 0;
			nb = 0;
			putchar(c);
		}
	}
	return 0;
} 