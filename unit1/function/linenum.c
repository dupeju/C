#include <stdio.h>
#define MAXLINE 1000		 //���������������

int getline(char line[], int maxline);
int copy(char to[], char from[]);

//��ӡ��������
int main(){
	int len;		//��ǰ�г���
	int max;		//Ŀǰ��������г���
	char line[MAXLINE];
	int longest[MAXLINE];
	int i, j;
	
	max = 0;
	i = 0;
	while((len = getline(line, MAXLINE)) > 0){
		max = len;
		longest[i++] = len;
	}
	if (max > 0){
		for (j = 0; j < i; ++j)
			printf("%d\n", longest[j]);
	}
	return 0;
}

//getline����:��һ�ж���s[]�������䳤��
int getline(char s[], int lim){
	int c, i;
	
	for (i=0; i < lim - 1 && (c = getchar())!=EOF && c!= '\n'; ++i)
		s[i] = c;
	if (c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
//copy����:��from���Ƶ�to;�������to�㹻��
int copy(char to[], char from[]){
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}