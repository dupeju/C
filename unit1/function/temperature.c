#include <stdio.h>

void fahr();
void celsius();

int main(){
	int select = 0;
	scanf("%d", &select);
	if (select){
		//华氏度转摄氏度
		fahr();
	}
	else{
		//摄氏度转华氏度
		celsius();
	}
	return 0;
}
void fahr(){
	float fahr;
	//celsius = 9/5 * fahr + 32
	scanf("%f", &fahr);
	printf("%.1f华氏度等于%.1f摄氏度\n", fahr, 5.0 / 9.0 * (fahr - 32.0));
}
void celsius(){
	float celsius;
	//celsius = 5/9 * (celsius - 32)
	scanf("%f", &celsius);
	printf("%.1f摄氏度等于华氏度%.1f\n", celsius, 9.0 / 5.0 * celsius + 32.0);
}