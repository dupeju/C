#include <stdio.h>
#define IN	1
#define OUT	2


int main(){
	int c, i, j, state;
	int nw, nleng;
	int length[999];
	
	nw = nleng = 0;
	state = OUT;
	//���벿��
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
	//��ӡ����
	printf("һ����%d������\n", nw);
	for (i = 0; i < nw; ++i){
		printf("%3d:",i+1);
		for (j = 0; j < length[i]; ++j)
			putchar('*');
		putchar('\n');
	}
	return 0;
}