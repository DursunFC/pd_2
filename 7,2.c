#include<stdio.h>
#include<string.h>
void main(){
	char str[300],word[25],*p;
	puts("Enter sentence"),	gets(str);
	puts("Enter word which you want to search"), gets(word);
	p=&str[0];
	for(;*p=='\n';*(p++))
		if(0==strcmp(*p,word))
			printf("%d",p);
			
}
