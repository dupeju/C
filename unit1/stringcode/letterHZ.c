#include <stdio.h>


int main (){
	long letter[26];
	int i, c, j;
	for (i = 0; i < 26; ++i)
		letter[i] = 0;
	//������
	while ((c = getchar()) != EOF){
		if (c >= 'a' && c <= 'z')
			++letter[c - 'a'];
		if (c >= 'A' && c <= 'Z')
			++letter[c - 'A'];
	}
	//�������
	for (i = 0; i < 26; ++i){
		printf("%c:",i+'a');
		for (j = 0; j < letter[i]; ++j)
			putchar('*');
		putchar('\n');
	}
	return 0;
}