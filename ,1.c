#include<stdio.h>
void main(){
	int *pntr1,*pntr2,*num,a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	pntr1=&a;
	pntr2=&b;
	if(*pntr1>*pntr2)	num=pntr1;
	else				num=pntr2;
	printf("%d",*num);
	
}
