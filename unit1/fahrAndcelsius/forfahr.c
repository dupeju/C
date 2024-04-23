#include <stdio.h>

int main(){
	int fahr;
	int test;
	for (fahr = 0, test = 10; fahr <= 200; fahr+=20)
		printf("%3d%6d\n", fahr, 5 * (fahr-32) /9);
	printf("test=%d\n", test);
	return 0;
}