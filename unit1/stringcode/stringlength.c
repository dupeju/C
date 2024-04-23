#include <stdio.h>
#define IN	1
#define OUT	2


int main(){
	int c, i, j, state;
	int nw, nleng;
	int length[999];
	
	nw = nleng = 0;
	state = OUT;
	//输入部分
	while ((c = getchar()) != EOF){
		if (c == ' ' || c == '\n' || c == '\t'){
			if (state == IN){
				state = OUT;
				length[nw] = nleng;
				++nw;
				nleng = 0;
			}
		}
		else{
			state = IN;
			++nleng;
		}
	}
	//打印部分
	printf("一共有%d个单词\n", nw);
	for (i = 0; i < nw; ++i){
		printf("%3d:",i+1);
		for (j = 0; j < length[i]; ++j)
			putchar('*');
		putchar('\n');
	}
	return 0;
}