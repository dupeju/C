#include <stdio.h>

int main(){
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 200;
	step = 20;
	
	celsius = lower;
	printf("celsius fahr\n");
	while(celsius <= upper){
		fahr = (5.0/9.0) * celsius + 32.0;
		printf("%3.0f%9.1f\n", celsius, fahr);
		celsius += step;
	}
	return 0;
}