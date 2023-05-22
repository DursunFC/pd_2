#include<stdio.h>
void main(){
	int a,b,*pntr1=&a,*pntr2=&b,*pntr3;
	scanf("%d",pntr1);
	scanf("%d",pntr2);	
	pntr3=pntr2;
	pntr2=pntr1;
	pntr1=pntr3;
}
