#include<stdio.h>
#define pi 3.14
float square(const int r);
void main(){
	int r;
	scanf("%d",&r);
	printf("%f",square(r));
}

float square(const int r){
	float area;
	area=pi*r*r;
	return area;
}
