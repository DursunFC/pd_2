#include<stdio.h>
int average(int n){
	int c,sum;
	if(n!=0){	
	sum=n+average(n);
	c++;
	}
	else	sum/=c;	
	return sum;
}
void main(){
	int c,n[100];
	for(c=0;;c++;){
	scanf("%d",&n[]);
	if(n[c]==0)	break;
	}
	printf("%d",average(n));
}
