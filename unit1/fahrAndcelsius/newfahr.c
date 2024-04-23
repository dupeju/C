#include <stdio.h>

int main(){
	float celsius, fahr;
	
	int lower, upper, step;
	
	lower = 0;
	upper = 200;
	step = 20;
	
	fahr = lower;
	
	while(fahr <= upper){
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f%9.1f\n", fahr, celsius);
		fahr += step;
	}
	return 0;
}