#include<stdio.h>
#include<conio.h>
void main(){
	int r;
	float pi=3.14;
	float area;
	printf("Enter radius");
	scanf("%d",&r);
	area=pi*r*r;
	printf("Area of circle is %f",area);
	getch();
}
