#include <stdio.h>

void fahr();
void celsius();

int main(){
	int select = 0;
	scanf("%d", &select);
	if (select){
		//���϶�ת���϶�
		fahr();
	}
	else{
		//���϶�ת���϶�
		celsius();
	}
	return 0;
}
void fahr(){
	float fahr;
	//celsius = 9/5 * fahr + 32
	scanf("%f", &fahr);
	printf("%.1f���϶ȵ���%.1f���϶�\n", fahr, 5.0 / 9.0 * (fahr - 32.0));
}
void celsius(){
	float celsius;
	//celsius = 5/9 * (celsius - 32)
	scanf("%f", &celsius);
	printf("%.1f���϶ȵ��ڻ��϶�%.1f\n", celsius, 9.0 / 5.0 * celsius + 32.0);
}