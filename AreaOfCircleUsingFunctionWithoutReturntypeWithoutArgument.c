#include<stdio.h>
void area(){
	float r,result;
	printf("Enter radius:");
	scanf("%f",&r);
	result=3.14*r*r;
	printf("Area of circle is %f",result);
}
void main(){
	area();
}
