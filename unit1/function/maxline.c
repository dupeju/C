#include <stdio.h>
#define MAXLINE 1000		 //允许输入行最长长度

int getline(char line[], int maxline);
int copy(char to[], char from[]);

//打印最长的输出行
int main(){
	int len;		//当前行长度
	int max;		//目前发现最长的行长度
	char line[MAXLINE];
	char longest[MAXLINE];
		
	max = 0;
	while((len = getline(line, MAXLINE)) > 0)
		if(len > max){
			max = len;
			copy(longest, line);
		}
	if(max > 0)
		printf("%s", longest);
	return 0;
}

//getline函数:将一行读入s[]并返回其长度
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
//copy函数:将from复制到to;这里假设to足够大
int copy(char to[], char from[]){
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}