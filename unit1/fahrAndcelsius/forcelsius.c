#include <stdio.h>

int main(){
	int celsius;
	printf("celsius fahr\n");
	for(celsius = 300; celsius >= 0; celsius -= 20)		//fahr = (9 / 5) * celsius + 32
		printf("%3d%6d\n",celsius, (9*celsius) / 5 + 32);
	return 0;
}