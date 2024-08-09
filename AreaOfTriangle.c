#include<stdio.h>
#include<conio.h>
void main(){
	int b,h;
	float area;
	printf("Enter base and height of triangle:");
	scanf("%d%d",&b,&h);
	area=(b*h)/2;
	printf("Area of triangle is %f",area);
	getch();
}
