#include <stdio.h>
#define MAXLEN 1000		//һ�еĳ��ȵ����ֵ
#define MAXWID 1000		//�����ɳ��ȳ���80���ַ��������е����ֵ
#define MIN 0			//MIN:����MIN�������еĶ������

int getline(char line[], int maxline);
void copy(char to[], char from[]);


int main(){
	int w, len, i;
	char line[MAXLEN];
	char eigline[MAXWID][MAXLEN];
	i = 0;
	w = 0;
	while((len = getline(line, MAXLEN))>0){
		if (len > MIN){
			copy(eigline[w], line);
			++w;
		}
	}
	
	while(i < w){
		printf("%s",eigline[i]);
		++i;
	}
	return 0;
}

int getline(char s[], int max){
	int c, i;
	for (i = 0; i < max - 1 && (c = getchar())!=EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
void copy(char to[], char from[]){
	int i;
	i = 0;
	while((to[i]=from[i])!='\0')
		++i;
}
