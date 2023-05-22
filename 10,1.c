#include<stdio.h>
#include<string.h>
struct func{int number;
		char name[25];
		char surname[25];
		int midGrade;
		int finalGrade;
} ;
typedef struct func student;

void main(){
	student *ptr;
	int c,n;
	printf("Ogrenci sayisi girin:\n");
	scanf("%d",&n);
	ptr=(student*)malloc(n*sizeof(student));
	for(c=0;c<n;c++){
		puts("Numara girin:");
		scanf("%d",(ptr+c)->number);
		puts("Once adi onra soyadini giriniz:	");
	//	gets(*(ptr+c)->name);
		scanf("%s",*(ptr+c)->name);
	
		
	}

}
