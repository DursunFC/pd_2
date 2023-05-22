#include<stdio.h>
void main(){
	int c,array[]={1,2,3,4,5};
	int *pntr=&array[0];
	for(c=5;c<=0;c--)
		printf("%d",*(pntr+c));	
}
