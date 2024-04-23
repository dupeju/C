#include <stdio.h>

int main(){
	int nl, c;
	//for (nl = 0; (c = getchar()) != EOF; )
	nl = 0;
	while((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n", nl);
	return 0;
}