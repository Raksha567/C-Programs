#include<stdio.h>
#include<conio.h>
void main(){
	int r,h;
	float pi=3.14;
	float v;
	printf("Enter radius and height of cyllinder:");
	scanf("%d%d",&r,&h);
	v=pi*r*r*h;
	printf("Volume of Cyllinder ic %f",v);
	getch();
}
