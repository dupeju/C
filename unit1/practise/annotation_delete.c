#include <stdio.h>
#define IN		1		//������
#define OUT		0		//������

int delete(int c,int state);
int main(){
	int state,c;
	state = OUT;
	while ((c = getchar())!= EOF){
		if (c == '"' || c == 39 && state == OUT)
			state = IN;
		else if ((c == '"' || c == 39 && state == IN))
			state = OUT;
		c = delete(c,state); 
		putchar(c);
	}
	return 0;
}
int delete(int c,int state){
	if(c == '/' && state != IN){
		c = getchar();
		if(c == '/'){		//����ע��//
			while((c = getchar()) != '\n');
			//����'\n'����ע��
			putchar(c);
		}
		else{				//����ע��/**/
			while((c = getchar()))
				if(c == '*' && getchar() == '/');
		}
		
		return c;	//ɾ��ע�ͷ���0
	}
	//ûɾ��ע�ͷ���1
	return c;}