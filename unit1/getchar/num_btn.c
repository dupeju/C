#include <stdio.h>

int main(){
	char c;
	int nb, nt, nl;
	nb = 0;		//�ո�
	nt = 0;		//�Ʊ��
	nl = 0;		//���з�
	while((c = getchar ()) != EOF){
		if(c == ' ')
			++nb;
		if(c == '\t')
			++nt;
		if(c == '\n')
			++nl;
	}
	printf("%d %d %d\n", nb, nt, nl);
	return 0;
}