#include<stdio.h>
void area(float x){
	float result;
	result=3.14*x*x;
	printf("Area of circle is %f",result);
}

void main(){
	float r;
	printf("enter radius:");
	scanf("%f",&r);
	area(r);
}
