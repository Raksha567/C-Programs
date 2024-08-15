#include<stdio.h>
void main(){
	float a,b,c,d;
	float avg;
	printf("Enter four numbers:");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	avg=(a+b+c+d)/4;
	printf("Average of four numbers is %f:",avg);
}
