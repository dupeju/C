#include <stdio.h>

int main(){
	char c;
	int nb, nt, nl;
	nb = 0;		//空格
	nt = 0;		//制表符
	nl = 0;		//换行符
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