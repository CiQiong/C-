#include<stdio.h>
#define MAXLINE 1000

int getline(char line[],int maxline);//函数原型 
void copy(char to[],char from[]);

//打印最长的输入行
main(){
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	max=0;
	while((len=getline(line,MAXLINE))>0)
		if(len>max){
			max=len;
			copy(longest,line);
		}
	if(max>0)
		printf("%s",longest);
	return 0;
} 
//将一行读入到s中并返回其长度
int getline(char s[],int lim){
	int c,i;
	for(i=0;i<lim-1&&(c=getchar())!=EOF&&c!='\n';++i)
		s[i]=c;
	if(c=='\n'){
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;
} 
//将from复制到to；这里假定to足够大
void copy(char to[],char from[]){
	int i;
	i=0;
	while((to[i]=from[i])!='\0')
		++i;
} 
