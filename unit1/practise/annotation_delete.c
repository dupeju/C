#include <stdio.h>
#define IN		1		//引号内
#define OUT		0		//引号外

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
		if(c == '/'){		//这种注释//
			while((c = getchar()) != '\n');
			//遇到'\n'结束注释
			putchar(c);
		}
		else{				//这种注释/**/
			while((c = getchar()))
				if(c == '*' && getchar() == '/');
		}
		
		return c;	//删除注释返回0
	}
	//没删除注释返回1
	return c;}