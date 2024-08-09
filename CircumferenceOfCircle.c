#include<stdio.h>
#include<conio.h>
void main(){
	int r;
	float pi=3.14;
	float c;
	printf("Enter radius");
	scanf("%d",&r);
	c=2*pi*r;
	printf("Circumference of circle is %f",c);
	getch();
}
