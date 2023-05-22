#include<stdio.h>
#include<stdlib.h>
void main(){
	int a,b;
	scanf("%d",&b);
	a=(int*)malloc(b*sizeof(int));
	*(a+1)=7;
	printf("%d",*(a+1));
}
