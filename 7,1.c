/*The program code that identifies whether two string entered from the keyboard are the same or not, and which 
one is longer as a word.*/
#include<stdio.h>
#include<string.h>
void main(){
	char str1[25],str2[25];
	puts("Enter first word"),	gets(str1);
	puts("Enter second word"),	gets(str2);
	if(strcmp(str1,str2))
		if(0<strlen(str1)-strlen(str2))		puts("First is longer");
		else if	(0>strlen(str1)-strlen(str2))	puts("Second is longer");
		else								puts("Same length");
	else	puts("Words are same");
}

